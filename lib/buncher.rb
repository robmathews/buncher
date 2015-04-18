require 'buncher/buncher'
require 'array'
module Buncher
  VERSION = "0.0.1"
  # your cluster needs to look like this. Make a bunch of them and pass them in. It's ok to pass in empty elements to start.
  class Cluster
    attr_accessor :elements
    attr_accessor :center
    def initialize(center, elements=[])
      self.center = center
      self.elements = elements
    end

    def ndim
      2
    end

    def clear
      elements.clear
    end

    def sum
      raise "calculate the sum of the elements"
    end

    def calculate_center
      raise "calculate the center as an average of the elements"
    end
    def distance_squared(element)
      raise "Distance between center and element - Implemented in a subclass"
    end

    def distortion
      elements.inject(0) {|acc, ele| distance_squared(ele)}
    end

    # return the distance to the closest element and remove the element from the list
    def closest!(elements)
      min_distance=nil
      min_index=nil
      elements.each_with_index do |element, index|
        distance = distance_squared(element)
        if(min_distance.nil? || min_distance > distance)
          min_distance = distance
          min_index = index
        end
      end
      elements.delete_at(min_index)
      min_distance
    end


    # some useful math
    def cdf(z)
      (0.5 * (1.0 + Math.erf((z*1.0)/1.4142135623730951)))
    end
  end

  # split array into several equal sized parts
  # taken from http://apidock.com/rails/v3.2.8/Array/in_groups
  def self.split_array_into_parts(array, nb_parts)
    start = 0
    groups = []

    modulo = array.size % nb_parts
    division = array.size / nb_parts

    nb_parts.times do |index|
      length = division + (modulo > 0 && modulo > index ? 1 : 0)
      groups << array.slice(start, length)
      start += length
    end
    groups
  end

  def self.distance(old_centers, new_clusters)
    new_clusters.inject(0) {|acc, cluster| acc + cluster.closest!(old_centers)}
  end

  def self.run(centers, elements, nb_jobs)
    old_centers=nil
    count=0
    while(true) do
      # clear the centers first
      centers.map(&:clear)

      # create jobs
      jobs = []
      elements_for_jobs = split_array_into_parts(elements, nb_jobs)
      nb_jobs.times do |i|
        jobs << Job.new(centers, elements_for_jobs[i])
      end

      if(nb_jobs > 1)
        # run jobs in parallel
        queue = Cabiri::JobQueue.new
        nb_jobs.times do |i|
          queue.add(i) { jobs[i].run }
        end
        queue.start(nb_jobs)
      else
        jobs.map(&:run)
      end
      centers.map(&:calculate_center)
      distance = distance(old_centers,centers) if old_centers
      # puts "iteration #{count+=1}: distance #{distance}" if old_centers
      break if old_centers && distance < 0.0001
      old_centers=centers.map(&:center)
    end
    centers
  end

  # job that will be used for parallelization with Cabiri
  class Job
    attr_accessor :centers
    attr_accessor :elements

    def initialize(centers, elements)
      @centers = centers
      @elements = elements
    end

    def run
      assignElementsToClosestCenter  # this is center, with list of elements
      @centers
    end

    def assignElementsToClosestCenter
      @elements.each do |element|
        best_center = nil
        best_distance = nil

        @centers.each do |center|
          distance = center.distance_squared(element)
          if best_distance.nil? or distance < best_distance
            best_center = center
            best_distance = distance
          end
        end
        best_center.elements << element
      end
    end
  end

  # from the kmeans++ algorithm for choosing centers. returns a list of centers
  def self.choose_centers(cluster_clazz, elements, number_centers)
    ele = elements.sample(1).first
    elements = elements.dup
    centers = [cluster_clazz.new(ele)]
    # puts "center 1 is #{centers.first.center}"
    elements.delete(ele)
    (2..number_centers).each do |index|
      probability_distribution=[]
      sum=elements.inject(0) {|sum, ele| distance=centers.inject(Float::MAX) {|acc,center|[center.distance_squared(ele),acc].min};sum+=distance;probability_distribution <<[distance,ele];sum}
      dice = rand(0..sum)
      # puts "dice=#{dice}, sum=#{sum}"
      # puts "distribution"
      # probability_distribution.each {|key,val| puts "#{key} : #{val}"}
      # puts
      ignore, next_center = probability_distribution.detect {|prob,ele|dice-=prob; dice <=0}
      # puts "center #{index} is #{next_center}"
      centers.unshift(cluster_clazz.new(next_center))
      elements.delete_at(elements.index(next_center))
    end
    centers
  end

  def self.calc_aK(centers, last_aK)
    if(centers.size == 2)
       1.0-3.0/(4.0*centers.first.ndim)
    else
      last_aK + (1.0 - last_aK) / 6
    end
  end

  def self.fK(centers,last_sK, last_aK)
    # from here - http://www.ee.columbia.edu/~dpwe/papers/PhamDN05-kmeans.pdf
    sK = centers.inject(0) {|acc, val| acc + val.distortion}
    aK = calc_aK(centers, last_aK) if centers.size > 1
    if centers.size == 1 || (last_sK||0).zero?
      [1,sK, aK || 0]
    else
      result = sK / (last_sK * aK)
      [result, sK, aK]
    end
  end

  # run the clustering algorithm until have calculated the current number of clusters, taken from this paper:
  # http://papers.nips.cc/paper/2526-learning-the-k-in-k-means.pdf
  def self.cluster(start,cluster_clazz,elements,threads=1)
    changed=true
    round=0
    solutions={}
    # try all the sizes of clusters up to #elements. Ok, sure we could probably do something like 25% .. ok, I did
    # that.
    not_clustered = last_sK = last_aK =last_fK=nil
    max_clusters=[1,elements.size/4].max
    (start..max_clusters).each do |number_clusters|
      initial_centers = choose_centers(cluster_clazz, elements, number_clusters)
      centers = initial_centers.map(&:dup)
      centers = run(centers,elements,threads)
      yield(elements, centers, initial_centers) if block_given?
      not_clustered ||=centers
      last_fK, last_sK, last_aK = fK(centers,last_sK, last_aK)
      puts "#{number_clusters}: fK() = #{last_fK}, last_sK=#{last_sK} last_aK=#{last_aK} "
      solutions[last_fK]=centers
      # break if number_clusters == 3 ## debugging
    end
    min_fK =solutions.keys.sort.first
    if min_fK > 0.85
      not_clustered # ie, not clustered at all
    else
      solutions[min_fK]
    end
  end
end

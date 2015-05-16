require 'buncher/buncher'
module Buncher
  VERSION = "1.0.15"
  # your cluster needs to look like this. Make a bunch of them and pass them in. It's ok to pass in empty elements to start.
  class Cluster
    attr_accessor :elements
    attr_accessor :center
    def initialize(center, elements=[])
      self.center = center
      self.elements = elements
    end

    def clear
      elements.clear
    end

    def size
      elements.size
    end

    # distortion - C++ code
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

  def self.calc_aK(centers, last_aK)
    if(centers.size == 2)
       1.0-3.0/(4.0*centers.first.center.size)
    else
      last_aK + (1.0 - last_aK) / 6
    end
  end

  def self.fK(centers,last_sK, last_aK,weights)
    # from here - http://www.ee.columbia.edu/~dpwe/papers/PhamDN05-kmeans.pdf
    sK = centers.inject(0) {|acc, val| acc + val.distortion(weights)}
    aK = calc_aK(centers, last_aK) if centers.size > 1
    if centers.size == 1 || (last_sK||0).zero?
      [1,sK, aK || 0]
    else
      result = sK / (last_sK * aK)
      [result, sK, aK]
    end
  end

  # run the clustering algorithm until we have calculated the best number of clusters, taken from this paper:
  # http://papers.nips.cc/paper/2526-learning-the-k-in-k-means.pdf
  # min_size: force at least min_size clusters to be created.
  # plausable: return a hash of #plausable values for k. Sometimes the data has multiple possible answers, so return
  # the top n of them in a hash of score=>plausable solutions. lowest scores are best, but sometimes there are 
  # "ties".
  def self.cluster(elements, weights,options={})
    plausable=options[:plausable] || 1
    solutions={}
    min_size=options[:min_size] || 1
    # try all the sizes of clusters up to #elements. Ok, sure we could probably do something like 50% .. ok, I did
    # that.
    not_clustered = last_sK = last_aK =last_fK=nil
    max_clusters=[min_size,(elements.size/2).floor].max
    max_clusters=[max_clusters,elements.size].min
    (1..max_clusters).each do |number_clusters|
      initial_centers = choose_centers(elements, weights, number_clusters) # C++ Native code
      centers = initial_centers.map(&:dup)
      centers = kmeans(centers,elements,weights) ## C++ Native code
      yield(elements, centers, initial_centers) if block_given?
      not_clustered ||=centers
      last_fK, last_sK, last_aK = fK(centers,last_sK, last_aK,weights)
      puts "summary #{number_clusters}: fK() = #{last_fK}, last_sK=#{last_sK} last_aK=#{last_aK} "
      solutions[last_fK]=centers if number_clusters >= min_size
      # break if number_clusters == 3 ## debugging
    end
    solutions.select! {|min_fK| min_fK <= 0.85}
    min_fKs =solutions.keys.sort[0...plausable] || [1.0]
    if options[:plausable]
      if min_fKs.empty?
        solutions.select {|key| min_fKs.include?(key)}.sort
      else
        {1.0 => elements.map {|ele| Cluster.new(ele,[ele])}} # ie, not clustered at all
      end
    elsif !min_fKs.empty?
      solutions[min_fKs.first]
    else
      elements.map {|ele| Cluster.new(ele,[ele])} # ie, not clustered at all
    end
  end
end

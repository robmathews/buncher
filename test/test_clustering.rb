require "buncher"
require 'rubystats'
require 'gnuplot'

# elements are pairs of x,y points
class Cluster < Buncher::Cluster
  def ndim
    2
  end
  def range
    (0..ndim-1)
  end

  def sum
    elements.inject([0]*ndim) do |acc,val|
      range.inject([]) {|arr,index| arr.concat([acc[index]+val[index]])}
    end
  end

  def calculate_center
    self.center = sum / elements.size unless(elements.empty?)
  end
  def distance_squared(element)
    range.inject(0) {|acc,dim|acc + (center[dim] - element[dim])**2}
  end

  def dump
    " #{center[0]}, #{center[1]}"
  end
end

def dump(centers)
  puts "centers are"
  centers.each {|ccc| puts ccc.dump}
end

def init_data(number_points, number_clusters)
  points_per_cluster = number_points.to_f / number_clusters
  elements=[]
  extra=0
  index=0
  seed=[[0,1],[0,0],[1,0]]
  number_clusters.times do
    # gens = [Rubystats::NormalDistribution.new(rand(0..1), 0.05), Rubystats::NormalDistribution.new(rand(0..1), 0.05)]
    gens = [Rubystats::NormalDistribution.new(seed[index][0], 0.05), Rubystats::NormalDistribution.new(seed[index][1], 0.05)]
    index+=1
    extra+= points_per_cluster - points_per_cluster.floor
    points = gens.map {|gen|gen.rng(points_per_cluster.floor+extra.floor)}
    points.first.each_index {|iii|elements << [points[0][iii],points[1][iii]]}
    extra-=1.0 if(extra > 1)
  end
  elements
end

def plot(file_name,points,centers, initial_centers=nil)
  Gnuplot.open do |gp|
    Gnuplot::Plot.new( gp ) do |plot|
    
      plot.title  "Cluster Plot (#{centers.size})"
      plot.xlabel "x"
      plot.ylabel "y"
      plot.terminal "gif"
      plot.output file_name
        
      x = points.map(&:first)
      y = points.map(&:last)

      plot.data << Gnuplot::DataSet.new( [x, y] ) do |ds|
        ds.with = "points"
        ds.notitle
      end

      unless initial_centers.nil?
        x = initial_centers.map(&:center).map(&:first)
        y = initial_centers.map(&:center).map(&:last)
        plot.data << Gnuplot::DataSet.new( [x, y] ) do |ds|
          ds.with = "points"
          ds.title="initial centers"
        end
      end

      x = centers.map(&:center).map(&:first)
      y = centers.map(&:center).map(&:last)
      plot.data << Gnuplot::DataSet.new( [x, y] ) do |ds|
        ds.with = "points"
        ds.title="centers"
      end
    end
  end
  file_name
end

class TestBuncher < Minitest::Test
  def test_should_find_the_one_center
      elements = [[1,1]]
      starting_centers = elements.sample(1).map {|aaa| Cluster.new(aaa)}
      new_centers = Buncher::run(starting_centers, elements, threads=1)
      dump(new_centers)
      assert_in_delta(new_centers.first.center[0],1.0,0.01)
      assert_in_delta(new_centers.first.center[1],1.0,0.01)
  end

  def test_should_find_one_cluster
      elements = [[1,1]]
      new_centers = Buncher::cluster(1,Cluster,elements)
      dump(new_centers)
      assert_equal(new_centers.size,1)
  end

  def test_gaussian_distribution_of_100_points_in_3_clusters
    10.times do |run|
      # srand(843284148793854177950180651080082381)
      elements = init_data(100,3)
      # elements.each {|eee| puts "#{eee[0]},#{eee[1]}"}
      new_centers = Buncher::cluster(1,Cluster,elements) {|elements,centers, initial_centers| plot("/tmp/#{run}_centers_#{centers.size}.png",elements,centers, initial_centers)}
      puts "run #{run}: k is #{new_centers.size}, seed was #{srand}"
      puts "ERROR "*4 if new_centers.size != 3
      puts
      assert_equal(new_centers.size,3)
    end
  end
end

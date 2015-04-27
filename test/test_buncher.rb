require "buncher"
require 'rubystats'
require 'gnuplot'
require "minitest/focus"

def dump(centers)
  puts "centers are"
  centers.each {|ccc| puts "center #{ccc.center.inspect} #{ccc.elements[0]}, #{ccc.elements[1]}"}
end

def init_data(number_points, number_clusters)
  points_per_cluster = number_points.to_f / number_clusters
  elements=[]
  extra=0
  index=0
  seed=[[0,1],[0,0],[1,0],[1,1]]
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

  def test_distance
    element1= [1.0, 0.5, 0.533333333333333, 1.0, 0.0, 0.0, 0.333333333333333, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.333333333333333, 0.333333333333333, 0.666666666666667, 0.0, 0.0, 1.0, 0.333333333333333, 0.333333333333333, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.333333333333333, 0.0, 0.0, 0.0, 0.0, 0.0, 0.333333333333333, 0.0, 0.333333333333333, 0.0, 0.4, 0.0, 0.0, 0.0, 0.0, 0.0, 0.333333333333333, 0.333333333333333, 0.0, 0.333333333333333, 0.4, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.4, 0.333333333333333, 0.0, 0.666666666666667, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    element2= [1.0, 1.0, 0.5, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    weights= [0.12158054711246201, 0.060790273556231005, 0.060790273556231005, 0.060790273556231005, 0.060790273556231005, 0.060790273556231005, 0.060790273556231005, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0121580547112462, 0.0060790273556231, 0.0060790273556231, 0.0060790273556231, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.0121580547112462, 0.0060790273556231, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155, 0.00303951367781155]
    assert_in_delta(Buncher::distance(element1,element2, weights),0.098,0.001)
  end
  def test_distance_nan
    element1 = [nil, 1, 1]
    element2 = [nil, nil, 1]
    weights = [1] * 3
    assert_in_delta(Buncher::distance(element1,element2, weights),0.5,0.01)
  end
  def test_should_find_the_one_center
      elements = [[1,1]]
      starting_centers = elements.sample(1).map {|aaa| Buncher::Cluster.new(aaa)}
      new_centers = Buncher::kmeans(starting_centers, elements, [1]*2)
      dump(new_centers)
      assert_in_delta(new_centers.first.center[0],1.0,0.01)
      assert_in_delta(new_centers.first.center[1],1.0,0.01)
  end

    focus
  def test_choose_centers_wrapper
      elements = [[1,1]]
      puts "test_choose_centers_wrapper - start"
      new_centers = Buncher::choose_centers(elements,[1]*2, 1)
      puts "test_choose_centers_wrapper - well well"
      puts new_centers.inspect
      dump(new_centers)
      assert_in_delta(new_centers.first.center[1],1.0,0.01)
      assert_in_delta(new_centers.first.center[1],1.0,0.01)
  end
  def test_choose_centers_wrapper2
      elements = init_data(100,3)
      new_centers = Buncher::choose_centers(elements, [1]*2, 3)
      dump(new_centers)
      assert_equal(new_centers.size,3)
  end
  def test_min_size_works
      elements =  init_data(100,4)
      new_centers = Buncher::cluster(elements,[1]*2,:min_size=>2)
      dump(new_centers)
      assert_equal(new_centers.size,4)
  end
  def test_gaussian_distribution_of_100_points_in_3_clusters
    1.times do |run|
      # srand(843284148793854177950180651080082381)
      elements = init_data(100,3)
      # elements.each {|eee| puts "#{eee[0]},#{eee[1]}"}
      # new_centers = Buncher::cluster(elements) {|elements,centers, initial_centers| puts "run #{run} setup";plot("/tmp/#{run}_centers_#{centers.size}.png",elements,initial_centers)}
      new_centers = Buncher::cluster(elements,[1]*2) {|elements,centers, initial_centers| 
        graphfile = "/tmp/#{run}_centers_#{centers.size}.png"
        plot(graphfile,elements,centers, initial_centers)
      }
      puts "run #{run}: k is #{new_centers.size}, seed was #{srand}"
      puts "ERROR "*4 if new_centers.size != 3
      puts
      assert_equal(3,new_centers.size)
      `open #{graphfile}`
    end
  end
end

# elements are pairs of x,y points
require 'kmeans_clustering'
class FlavourProfileCluster < KMeansClustering::Cluster
  def ndim
    127
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

  def variance
    (elements.inject(0) {|acc,ele|acc+distance_squared(ele)} / (elements.size - 1))**0.5
  end

  def dump
    " #{center[0]}, #{center[1]}"
  end
end
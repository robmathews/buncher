class Array
  attr_accessor :owner

  def set_owner(owner)
    self.owner=owner
    self
  end

  include Math
  def mean
   values = self.reject(&:blank?)
   return nil if values.empty?
   values.inject(0){ |acc, x| x.to_f+acc } / values.size
  end

  def std_dev
    mean = self.mean
    values = self.reject(&:nil?)
    (values.inject(0) {|acc, val|deviation=val.to_f-mean;acc+deviation**2.0} / (size - 1)) ** 0.5 unless size < 2
  end

  def sum_each(array)
    index=-1
    map {|val| (val||0) + (array[index+=1]||0) }
  end

  def diff_each(array)
    index=-1
    map {|val| (val||0) - (array[index+=1]||0) }
  end

  def /(number)
    map {|val| val / number}
  end
end
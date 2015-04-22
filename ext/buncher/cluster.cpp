#include "definitions.hpp"
#include <random>
#include <limits>
#include <boost/foreach.hpp>

VALUE new_array()
{
  VALUE array_class = rb_define_class("Array", rb_cObject);
  return ::rb_funcall(array_class, rb_intern("new"),0,NULL);
}

int array_size(VALUE rb_array)
{
  return NUM2INT(::rb_funcall(rb_array, rb_intern("size"),0,NULL));  
}

VALUE element_at(VALUE rb_array, int index)
{
    return rb_funcall(rb_array, rb_intern("at"),1,INT2NUM(index));
}

Element::Element(VALUE rb_element)
{
  int element_size = array_size(rb_element);
  rb_obj = rb_element;
  for(int jjj=0;jjj<element_size;jjj++)
  {
    double value = NUM2DBL(element_at(rb_element, jjj));
    push_back(value);
  }  
}

double Element::squared_distance(Element& other)
{
  double rslt=0.0;
  for(int iii=0;iii<size();iii++){
      double distance = (*this)[iii] - other[iii];
      rslt+=distance*distance;
  }
  return rslt;
}

Element Element::distance(Element& other)
{
  Element rslt;
  rslt.reserve(size());
  for(int iii=0;iii<size();iii++){
      rslt[iii] = (*this)[iii] - other[iii];
  }
  return rslt;
}

Elements::Elements(VALUE rb_elements)
{
  int size = array_size(rb_elements);
  for(int iii=0;iii<size;iii++)
    this->push_back(Element(element_at(rb_elements, iii)));
}



void dump_element(Element element)
{
  string pSep("");
  cout << "[";
  for(int iii=0;iii<element.size();iii++)
  {
    cout << pSep << element[iii];
    pSep=",";
  }
  cout << "]";
}

void dump_elements(Elements elements)
{
  string pSep("");
  for(int iii=0;iii<elements.size();iii++)
  {
    cout << pSep;
    dump_element(elements[iii]);
    cout << "\n";
    pSep=",";
  }
}

Elements::operator VALUE()
{
  VALUE elements_rb = new_array();  
  for(int iii=0;iii<this->size();iii++)
    ::rb_funcall(elements_rb, rb_intern("<<"),1,(VALUE)(*this)[iii]);
  return elements_rb;
}

Element pairwise_sum(Element& a, Element& b)
{
  Element result;
  result.reserve(a.size());
  for(int iii=0;iii<a.size();iii++)
    result[iii]=a[iii]+b[iii];
  return result;
}
/* 
  Elements are all the points in the world
  Element is a single point, which contains 127 numbers in the flavour profile world
*/
Element Elements::calculate_center()
{
  Element zero;
  zero.resize(this->begin()->size(),0.0);
  Element center = accumulate(this->begin(), this->end(), zero, pairwise_sum);
  for(int iii=0;iii<center.size() && this->size() > 0;iii++)
    center[iii]=center[iii]/size();
  return center;
}


VALUE append_rb_center(VALUE rb_array, Element& center, Elements& elements)
{
  VALUE rb_cluster=::rb_funcall(cluster_class(), rb_intern("new"),2,(VALUE)center, (VALUE)elements);
  ::rb_funcall(rb_array, rb_intern("<<"),1,rb_cluster);
  return rb_array;
}

VALUE append_rb_center(VALUE rb_array, Elements& elements)
{
  Element center = elements.calculate_center();
  return append_rb_center(rb_array, center, elements);
}

Bunches::operator VALUE()
{
  VALUE rb_centers = new_array();
  for(int iii=0;iii<(*this).size();iii++)
    append_rb_center(rb_centers,(*this)[iii].center,(*this)[iii].elements);
  return rb_centers;  
}

typedef struct {
  double probability_sum;
  Element* element;
} Probability_bucket;

double min_distance(Bunches& centers, Element& element)
{
  double val = std::numeric_limits<double>::max();
  for(int iii=0;iii<centers.size();iii++)
    val = min(centers[iii].center.squared_distance(element), val);
  return val;
}

template<typename T> T dice(T max)
{
  std::random_device rd;
  std::mt19937 gen(rd());  
  std::uniform_int_distribution<> dis(0, max);
  return dis(gen);  
}

extern "C" VALUE choose_centers(VALUE klass, VALUE rb_elements, VALUE rb_number_centers)
{
  Elements elements(rb_elements);
  int number_centers = NUM2INT(rb_number_centers);
  int random_index = dice(elements.size()-1);
  Bunches centers;
  Bunch center(elements[random_index]);
  centers.push_back(center);
  elements.erase(elements.begin() + random_index);
  for(int iii=1;iii<number_centers;iii++)
  {
    vector<Probability_bucket> probability_distribution;
    double sum=0.0;
    for(int jjj=0;jjj<elements.size();jjj++)
    {
      sum+=min_distance(centers, elements[jjj]);
      Probability_bucket bucket;
      bucket.probability_sum = sum;
      bucket.element = &elements[jjj];
      probability_distribution.push_back(bucket);
    }
    double cutoff = dice(sum);
    int yyy;
    for(yyy=0;yyy<probability_distribution.size();yyy++)
    {
      Probability_bucket& bucket = probability_distribution[yyy];
      cutoff-=bucket.probability_sum;
      if(cutoff <=0)
        break;
    }
    Bunch next_center(elements[yyy]);
    centers.push_back(next_center);
    elements.erase(elements.begin() + yyy);
  }
  return centers;
}

Bunches::Bunches(VALUE rb_centers)
{
  int size = array_size(rb_centers);
  for(int iii=0;iii<size;iii++)
    push_back(Bunch(element_at(rb_centers,iii)));
}

Bunch::Bunch(VALUE rb_cluster){
  VALUE rb_center=::rb_funcall(rb_cluster, rb_intern("center"),0);
  VALUE rb_elements=::rb_funcall(rb_cluster, rb_intern("elements"),0);
  center=rb_center;
  elements=rb_elements;
}

void Bunch::calculate_center()
{
  if(!elements.empty())
    center = elements.calculate_center();
}

double calculate_distance(Bunches old_bunches, Bunches& new_bunches)
{
  double rslt=0;
  BOOST_FOREACH(Bunch new_bunch, new_bunches)
  {
    int index = new_bunch.closest(old_bunches);
    rslt+=old_bunches[index].squared_distance(new_bunch);
    old_bunches.erase(old_bunches.begin()+index);
  }
  return rslt;
}

int Bunch::closest(Bunches& other)
{
  int best_bunch(0);
  double best_distance = std::numeric_limits<double>::max();
  for(int iii=0;iii<other.size();iii++)
  {
    double distance = squared_distance(other[iii]);
    if(distance < best_distance)
    {
      best_bunch = iii;
      best_distance = distance;
    }
  }
  return best_bunch;
}

extern "C" VALUE kmeans(VALUE klass, VALUE rb_centers, VALUE rb_elements)
{
  Elements elements(rb_elements);
  Bunches centers(rb_centers);
  Bunches previous_iteration;
  int count = 0;
  while(true)
  {
    BOOST_FOREACH(Bunch center, centers) {center.clear();}
    Jobs jobs;
    // since we only have one job right now...don't worry about splitting.
    jobs.push_back(Job(centers, elements));
    BOOST_FOREACH(Job job, jobs) { job.run();}
    BOOST_FOREACH(Bunch center, centers) {center.calculate_center();}
    if(!previous_iteration.empty())
    {
      double distance = calculate_distance(previous_iteration, centers);
      if(distance < 0.0001)
        break;
    }
    previous_iteration = centers;
  }
  return centers;
}

void Job::run()
{

  BOOST_FOREACH(Element& element, elements){
    Bunch* best_bunch(NULL);
    double best_distance = std::numeric_limits<double>::max();
    BOOST_FOREACH(Bunch& bunch, bunches){
      double distance = bunch.center.squared_distance(element);
      if(distance < best_distance)
      {
        best_bunch = &bunch;
        best_distance = distance;
      }
    }
    best_bunch->elements.push_back(element);
  }
}

extern "C" VALUE distortion(VALUE rb_cluster)
{
  printf("distortion: start\n");
  Element center(::rb_funcall(rb_cluster, rb_intern("center"),0,NULL));
  printf("distortion: center.size()=%lu\n",center.size());
  Elements elements(::rb_funcall(rb_cluster, rb_intern("elements"),0,NULL));
  double sum=0.0;
  BOOST_FOREACH(Element element, elements) {printf("distortion: element.squared_distance %f\n",element.squared_distance(center));}
  BOOST_FOREACH(Element element, elements) {sum+=element.squared_distance(center);}
  printf("distortion: elements.size()=%lu, sum was %f\n",elements.size(),sum);
  return DBL2NUM(sum);
}


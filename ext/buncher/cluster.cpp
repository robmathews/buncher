#include "definitions.hpp"
#include <random>
#include <limits>
#include <boost/foreach.hpp>
#include <math.h>

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

double coalesce(double in)
{
  return isnan(in) ? 0.0 : in;
}

double nullif(VALUE rb_float)
{
  return (rb_float == Qnil) ? NAN : NUM2DBL(rb_float);
}

VALUE rb_nullif(double in)
{
  return isnan(in) ? Qnil : DBL2NUM(in);
}

Weights::Weights(VALUE rb_element)
{
  int element_size = array_size(rb_element);
  for(int jjj=0;jjj<element_size;jjj++)
  {
    double value = NUM2DBL(element_at(rb_element, jjj));
    push_back(value);
  }  
}

Element::Element(VALUE rb_element)
{
  int element_size = array_size(rb_element);
  rb_obj = rb_element;
  for(int jjj=0;jjj<element_size;jjj++)
  {
    double value = nullif(element_at(rb_element, jjj));
    push_back(value);
  }  
}

Element::operator VALUE()
{
  if(rb_obj)
    return rb_obj;
  else
  {
    VALUE element_rb = new_array();  
    for(int iii=0;iii<this->size();iii++)
      ::rb_funcall(element_rb, rb_intern("<<"),1,rb_nullif((*this)[iii]));
    return element_rb;
  }
}

double Element::squared_distance(Element& other, Weights& weights)
{
  return pow(distance(other, weights),2);
}

double Element::distance(Element& other, Weights& weights)
{
  double rslt=0.0;
  double sum=0.0;
  for(int iii=0;iii<size();iii++)
    if(!(isnan((*this)[iii]) && isnan(other[iii])))
    {
      double distance = coalesce((*this)[iii]) - coalesce(other[iii]);
      sum+=weights[iii];
      rslt+=abs(distance)*weights[iii];
    }
  return rslt/sum;
}

void Element::sum(const Element& other)
{
  for(int iii=0;iii<this->size();iii++)
    (*this)[iii]+=other[iii];
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

/* 
  Elements are all the points in the world
  Element is a single point, which contains 127 numbers in the flavour profile world
*/
Element Elements::calculate_center()
{
  Element center;
  center.resize(this->begin()->size(),0.0);
  for(int iii=0;iii<this->size();iii++)
    center.sum((*this)[iii]);
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
    val = min(centers[iii].center.squared_distance(element,centers[iii].weights), val);
  return val;
}

template<typename T> T dice(T max)
{
  std::random_device rd;
  std::mt19937 gen(rd());  
  std::uniform_int_distribution<> dis(0, max);
  return dis(gen);  
}

extern "C" VALUE choose_centers(VALUE klass, VALUE rb_elements, VALUE rb_weights, VALUE rb_number_centers)
{
  Elements elements(rb_elements);
  Weights weights(rb_weights);
  int number_centers = NUM2INT(rb_number_centers);
  int random_index = dice(elements.size()-1);
  Bunches centers;
  Bunch center(elements[random_index],weights);
  centers.push_back(center);
  elements.erase(elements.begin() + random_index);
  for(int iii=1;iii<number_centers;iii++)
  {
    vector<Probability_bucket> probability_distribution;
    double sum=0.0;
    for(int jjj=0;jjj<elements.size();jjj++)
    {
      double distance =min_distance(centers, elements[jjj]);
      sum+=distance;
      Probability_bucket bucket;
      bucket.probability_sum = distance;
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
      {
        break;
      }
    }
    // printf("choose_centers chose %d\n",yyy);
    Bunch next_center(elements[yyy],weights);
    centers.push_back(next_center);
    elements.erase(elements.begin() + yyy);
  }
  return centers;
}

Bunches::Bunches(VALUE rb_centers, VALUE rb_weights)
{
  int size = array_size(rb_centers);
  for(int iii=0;iii<size;iii++)
    push_back(Bunch(element_at(rb_centers,iii), rb_weights));
}

Bunch::Bunch(VALUE rb_cluster, VALUE rb_weights){
  VALUE rb_center=::rb_funcall(rb_cluster, rb_intern("center"),0);
  VALUE rb_elements=::rb_funcall(rb_cluster, rb_intern("elements"),0);
  center=rb_center;
  elements=rb_elements;
  weights=rb_weights;
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

extern "C" VALUE distance(VALUE klass, VALUE rb_element1, VALUE rb_element2, VALUE rb_weights)
{
  Element a(rb_element1);
  Element b(rb_element2);
  Weights weights(rb_weights);
  return DBL2NUM(a.distance(b, weights));
}

extern "C" VALUE kmeans(VALUE klass, VALUE rb_centers, VALUE rb_elements, VALUE rb_weights)
{
  Elements elements(rb_elements);
  Bunches centers(rb_centers,rb_weights);
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
      if(distance < 0.00001)
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
      double distance = bunch.center.squared_distance(element,bunch.weights);
      if(distance < best_distance)
      {
        best_bunch = &bunch;
        best_distance = distance;
      }
    }
    best_bunch->elements.push_back(element);
  }
}

extern "C" VALUE distortion(VALUE rb_cluster, VALUE rb_weights)
{
  Element center(::rb_funcall(rb_cluster, rb_intern("center"),0,NULL));
  Elements elements(::rb_funcall(rb_cluster, rb_intern("elements"),0,NULL));
  Weights weights(rb_weights);
  double sum=0.0;
  BOOST_FOREACH(Element element, elements) {sum+=element.squared_distance(center,weights);}
  // printf("distortion: elements.size()=%lu, sum was %f\n",elements.size(),sum);
  return DBL2NUM(sum);
}


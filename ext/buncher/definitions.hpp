#pragma once
#include <boost/array.hpp>
#include <string>
#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
extern "C" {
  #include <ruby.h>
}
extern "C" VALUE cluster_class();
extern "C" VALUE array_class();

#include "definitions.hpp"

using namespace std;
class Element : public vector<double>
{
public:
  Element() {}
  Element(VALUE rb_obj);
  VALUE rb_obj;
  operator VALUE() {return rb_obj;}
  double distance_squared(Element& other){
    return distance(other).square().sum();
  }
  Element distance(Element& other);
  Element square();
  double sum();
};

class Elements: public vector<Element>
{
public:
  Elements() {}
  Elements(VALUE rb_obj);
  operator VALUE();
  Element calculate_center();

};


class Bunches;
class Bunch
{
public:
  Bunch(VALUE rb_obj);
  Bunch(Element& _center):center(_center) {}
  Element center;
  Elements elements;
  void clear() {elements.clear();}
  void calculate_center();
  double distance_squared(Bunch& bunch)
  {
    return center.distance_squared(bunch.center);
  }
  // index of closest bunch
  int closest(Bunches& other);
};

class Bunches: public vector<Bunch>
{
public:
  Bunches() {}
  Bunches(VALUE rb_centers);
  operator VALUE();
};

class Job
{
public:
  Bunches& bunches;
  Elements& elements;
  Job(Bunches& _bunches, Elements& _elements):bunches(_bunches),elements(_elements) {}
  void run();
};

typedef vector<Job> Jobs;


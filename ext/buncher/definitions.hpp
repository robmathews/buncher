#pragma once
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

using namespace std;

class Weights : public vector<double>
{
public:
  Weights() {}
  Weights(VALUE rb_obj);
};

class Element : public vector<double>
{
public:
  Element() {}
  Element(VALUE rb_obj);
  VALUE rb_obj;
  double squared_distance(Element& other, Weights& weights);
  double distance(Element& other, Weights& weights);
  void sum(const Element& other);
  operator VALUE();
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
  Bunch(VALUE rb_obj, VALUE rb_weights);
  Bunch(Element& _center, Weights& _weights):center(_center),weights(_weights) {}
  Element center;
  Elements elements;
  Weights weights;
  void clear() {elements.clear();}
  void calculate_center();
  double squared_distance(Bunch& bunch)
  {
    return center.squared_distance(bunch.center, bunch.weights);
  }
  // index of closest bunch
  int closest(Bunches& other);
};

class Bunches: public vector<Bunch>
{
public:
  Bunches() {}
  Bunches(VALUE rb_centers, VALUE rb_weights);
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


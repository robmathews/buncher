#include <ruby.h>

extern VALUE kmeans(VALUE klass, VALUE centers, VALUE elements, VALUE weights);
extern VALUE distance(VALUE klass, VALUE element1, VALUE element2, VALUE weights);
extern VALUE choose_centers(VALUE klass, VALUE elements, VALUE weights, VALUE number_centers);
extern VALUE distortion(VALUE self, VALUE weights);
VALUE cluster_class()
{
  VALUE mBuncher = rb_define_module("Buncher");
  VALUE cluster_class = rb_define_class_under(mBuncher, "Cluster", rb_cObject);
  return cluster_class;
}

VALUE kmeans_wrapper(VALUE klass, VALUE centers, VALUE elements, VALUE weights)
{
  return kmeans(klass,  centers, elements, weights);
}

VALUE distance_wrapper(VALUE klass, VALUE element1, VALUE element2, VALUE weights)
{
  return distance(klass,  element1, element2, weights);
}

VALUE choose_centers_wrapper(VALUE klass, VALUE elements, VALUE weights, VALUE number_centers)
{
  return choose_centers(klass,  elements, weights, number_centers);
}

VALUE distortion_wrapper(VALUE self, VALUE weights)
{
  return distortion(self, weights);
}

void Init_buncher()
{
  // VALUE mBuncher = rb_define_class("Buncher::Cluster",rb_cObject);
  VALUE mBuncher = rb_define_module("Buncher");
  rb_define_singleton_method(mBuncher, "distance", distance_wrapper, 3);
  rb_define_singleton_method(mBuncher, "kmeans", kmeans_wrapper, 3);
  rb_define_singleton_method(mBuncher, "choose_centers", choose_centers_wrapper, 3);
  rb_define_method(cluster_class(), "distortion", distortion_wrapper, 1);
}
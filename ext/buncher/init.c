#include <ruby.h>

extern VALUE kmeans(VALUE klass, VALUE centers, VALUE elements);
extern VALUE choose_centers(VALUE klass, VALUE elements, VALUE number_centers);
extern VALUE distortion(VALUE self);
VALUE cluster_class()
{
  VALUE mBuncher = rb_define_module("Buncher");
  VALUE cluster_class = rb_define_class_under(mBuncher, "Cluster", rb_cObject);
  return cluster_class;
}

VALUE kmeans_wrapper(VALUE klass, VALUE centers, VALUE elements)
{
  return kmeans(klass,  centers, elements);
}

VALUE choose_centers_wrapper(VALUE klass, VALUE elements, VALUE number_centers)
{
  return choose_centers(klass,  elements, number_centers);
}

VALUE distortion_wrapper(VALUE self)
{
  return distortion(self);
}

void Init_buncher()
{
  // VALUE mBuncher = rb_define_class("Buncher::Cluster",rb_cObject);
  VALUE mBuncher = rb_define_module("Buncher");
  rb_define_singleton_method(mBuncher, "kmeans", kmeans_wrapper, 2);
  rb_define_singleton_method(mBuncher, "choose_centers", choose_centers_wrapper, 2);
  rb_define_method(cluster_class(), "distortion", distortion_wrapper, 0);
}
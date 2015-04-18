#include <ruby.h>

VALUE hello_world(VALUE klass)
{
  return rb_str_new2("hello world");
}

void Init_buncher()
{
  // VALUE mBuncher = rb_define_class("Buncher::Cluster",rb_cObject);
  VALUE mBuncher = rb_define_module("Buncher");
  rb_define_singleton_method(mBuncher, "hello_world", hello_world, 0);
}
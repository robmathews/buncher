# -*- ruby -*-

require "rubygems"
gem "hoe"
require "hoe"

Hoe.plugin :gemspec
Hoe.plugin :bundler
Hoe.plugin :git
Hoe.plugin :compiler
# Hoe.plugin :gem_prelude_sucks
# Hoe.plugin :inline
Hoe.plugin :minitest
# Hoe.plugin :racc
# Hoe.plugin :rcov
# Hoe.plugin :rdoc

Hoe.spec "buncher" do
  developer("Robert Mathews", "rob@drync.com")
    self.extra_dev_deps += [
    ["hoe-bundler",     ">= 1.1"],
    ["hoe-gemspec",     ">= 1.0"],
    ["hoe-git",         ">= 1.4"],
    ["minitest",        "> 2.2.2"],
    ["minitest-focus"],
    ["rake",            ">= 0.9"],
    ["rake-compiler",   "> 0.9.2"],
    ['gnuplot'],
    ['rubystats']
  ]

  license "MIT" # this should match the license in the README
end

# vim: syntax=ruby

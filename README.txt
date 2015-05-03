= buncher

home  :: https://github.com/robmathews/buncher
code  :: https://github.com/robmathews/buncher
rdoc  :: https://github.com/robmathews/buncher
bugs  :: https://github.com/robmathews/buncher

== DESCRIPTION:

buncher implements a variant of the popular k-means clustering algorithm as a native ruby extension.
The variant uses the technique described in http://www.ee.columbia.edu/~dpwe/papers/PhamDN05-kmeans.pdf
in order to find the best value of K.

== FEATURES/PROBLEMS:

* native C implementation is fast and handles large datasets
* doesn't require knowledge of K.
* only ruby 1.9.3-p547 and higher
* no idea about ruby 2.2

== SYNOPSIS:

  each point is represented as an array
  the dataset is represented as an array of arrays
  given an array of arrays

== REQUIREMENTS:

* usual requirements to install a native gem

== INSTALL:

Add this to the Gemfile:
  gem buncher
and then
  bundle install

== DEVELOPERS:

After checking out the source, run:

  $ rake newb

This task will install any missing dependencies, run the tests/specs,
and generate the RDoc.

== LICENSE:

(The MIT License)

Copyright (c) 2015 

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

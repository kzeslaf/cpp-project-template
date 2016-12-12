cpp-project-template
====================

[![Build Status](https://travis-ci.org/kzeslaf/cpp-project-template.svg?branch=master)](https://travis-ci.org/kzeslaf/cpp-project-template)

This project is just simple C++ project template. This example shows use of
such things like:

* `cmake` build system,
* unit tests,
* etc..

This example has been created on Ubuntu 14.04.


Unit Tests
----------

We're using [gtest](https://code.google.com/p/googletest/) library for creating unit tests. See following dirs:

* test
* third-party/gtest-1.7.0


Documentation
-------------

We're using [doxygen](http://doxygen.org) to create and build documentation.


TODO
----

* project versioning
* travis ci: don't install clang in g++ build
* turn on C++11
* use gtest as git submodule
* make SConstruct for doxygen

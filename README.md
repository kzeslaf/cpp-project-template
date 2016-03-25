cpp-project-template
====================

[![Build Status](https://travis-ci.org/kzeslaf/cpp-project-template.svg?branch=master)](https://travis-ci.org/kzeslaf/cpp-project-template)

This project is just simple C++ project template. This example shows use of
such things like:

* `scons` build system,
* unit tests,
* etc..

This example has been created on Ubuntu 14.04.


scons
-----

We are using [scons](http://www.scons.org) as a build system.

To build project call following command in project main dir:

    scons

and to clean project call:

    scons -c


Qt Creator IDE
--------------

For IDE we're using Qt Creator. Project data is written in following files:

* proj/qtcreator/cpp-project-template.creator
* proj/qtcreator/cpp-project-template.files
* proj/qtcreator/cpp-project-template.include
* proj/qtcreator/cpp-project-template.config


Unit Tests
----------

We're using [gtest](https://code.google.com/p/googletest/) library for creating unit tests. See following dirs:

* test
* third-party/gtest-1.7.0

To run tests call following command in main dir after building project:

    test/test


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

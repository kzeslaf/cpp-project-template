cpp-project-template
====================

[![Travis CI Build Status](https://travis-ci.org/kzeslaf/cpp-project-template.svg?branch=master)](https://travis-ci.org/kzeslaf/cpp-project-template)
[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/kzeslaf/cpp-project-template?branch=master&svg=true)](https://ci.appveyor.com/project/kzeslaf/cpp-project-template/branch/master)
[![Documentation Status](https://readthedocs.org/projects/kzeslaf-cpp-project-template/badge/?version=latest)](http://kzeslaf-cpp-project-template.readthedocs.io/en/latest/?badge=latest)

This project is just simple C++ project template. This example shows use of
such things like:

* `cmake` build system,
* unit tests,
* etc..

This example has been created on Ubuntu 14.04.


CMake
-----

Presentations:
* [(2017.09) Mathieu Ropert: Using Modern CMake Patterns to Enforce a Good Modular Design](https://www.youtube.com/watch?v=eC9-iRN2b04)
* [(2017.05) Daniel Pfeifer: Effective CMake](https://www.youtube.com/watch?v=bsXLMQ6WgIk&t=2s)
* [(2015.05) Daniel Pfeifer: CMake Presentation](http://purplekarrot.net/blog/cmake-introduction-and-best-practices.html)

References:
* [CMake Primer on llvm.org](https://llvm.org/docs/CMakePrimer.html)
* [Effective Modern CMake by Manuel Binna](https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1)

* [CMake FAQ on vtk.org](http://www.vtk.org/Wiki/CMake_FAQ)
* [CMake Cross Compiling on vtk.org](http://www.vtk.org/Wiki/CMake_Cross_Compiling)


Documentation
-------------

We're using [doxygen](http://doxygen.org) to create and build documentation.


Unit Tests
----------

We're using [Google Test](https://code.google.com/p/googletest/) library for creating unit tests. See following dirs:

* test
* third-party/googletest

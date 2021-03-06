cpp-project-template
====================

![](https://github.com/kzeslaf/cpp-project-template/workflows/build-linux/badge.svg)
![](https://github.com/kzeslaf/cpp-project-template/workflows/build-windows/badge.svg)
[![Documentation Status](https://readthedocs.org/projects/kzeslaf-cpp-project-template/badge/?version=latest)](http://kzeslaf-cpp-project-template.readthedocs.io/en/latest/?badge=latest)

This project is just simple C++ project template. This example shows use of
such things like:

* `cmake` build system,
* unit tests,
* etc..


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

We're using [Google Test](https://code.google.com/p/googletest/) library for
creating unit tests. See following dirs:

* test
* third-party/googletest

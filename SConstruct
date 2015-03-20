import os


#
# Defaults
#
# You can override defaults with environment variables,
# example:
#
#    CC=clang CXX=clang++ scons
#
CC = 'gcc'
CXX = 'g++'


#
# Environment
#
cppflags = []
cppflags += ['-Wall', '-Wextra']
cppflags += ['-g', '-O2']

ENV = Environment(CPPFLAGS=cppflags)
ENV['CC'] = os.environ.get('CC', CC)
ENV['CXX'] = os.environ.get('CXX', CXX)


#
#
#
cpppath = ['src']
sources = ['src/main.cpp', 'src/func.cpp']

ENV.Program('yprfib', sources, CPPPATH=cpppath)


#
# Unit tests
#
SConscript('third-party/gtest-1.7.0/SConscript', exports='ENV')
SConscript('test/SConscript', exports='ENV')

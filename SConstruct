#
# You can override default compilers with environment variables,
# example:
#
#    CC=clang CXX=clang++ scons
#


import os


#
#
#
cppflags = [
    '-Wall', '-Wextra',
    '-g', '-O2',
]


#
# Environment
#
ENV = Environment(CPPFLAGS=cppflags)

ENV['CC'] = os.environ.get('CC', ENV['CC'])
ENV['CXX'] = os.environ.get('CXX', ENV['CXX'])


#
#
#
cpppath = ['src']
sources = Glob('src/*.cpp')

ENV.Program('yprfib', sources, CPPPATH=cpppath)


#
# Unit tests
#
SConscript('third-party/gtest-1.7.0/SConscript', exports='ENV')
SConscript('test/SConscript', exports='ENV')

cmake_minimum_required(VERSION 2.8)
project(cpp-project-template)


if (NOT MSVC)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11 ${CMAKE_CXX_FLAGS}")
endif (NOT MSVC)


add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(tools)

add_subdirectory(third-party/gtest-1.7.0 EXCLUDE_FROM_ALL)

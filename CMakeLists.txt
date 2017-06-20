cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(cpp-project-template)


if (NOT MSVC)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11 ${CMAKE_CXX_FLAGS}")
endif (NOT MSVC)


add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(tools)

add_subdirectory(third-party/gtest EXCLUDE_FROM_ALL)


#
# Turn off warning about unused QT_QMAKE_EXECUTABLE added by QtCreator
#
unset(${QT_QMAKE_EXECUTABLE} CACHE)

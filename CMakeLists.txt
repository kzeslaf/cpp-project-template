cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(cpp-project-template)


if (NOT KZESLAF_DEFAULT_WARNINGS)
    if (CMAKE_COMPILER_IS_GNUCXX)
        set(KZESLAF_DEFAULT_WARNINGS
            -Wall
            -Wextra
            -Werror
            )
    endif(CMAKE_COMPILER_IS_GNUCXX)
endif()


add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(tools)

add_subdirectory(third-party/gtest EXCLUDE_FROM_ALL)


#
# Turn off warning about unused QT_QMAKE_EXECUTABLE added by QtCreator
#
unset(${QT_QMAKE_EXECUTABLE} CACHE)

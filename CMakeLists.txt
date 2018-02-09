cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(cpp-project-template)


if (MSVC)
    add_compile_options(/W3 /WX)
else()
    add_compile_options(-Wall -Wextra -Werror)
endif()


add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(tools)

add_subdirectory(third-party/googletest EXCLUDE_FROM_ALL)


#
# Turn off warning about unused QT_QMAKE_EXECUTABLE added by QtCreator
#
unset(${QT_QMAKE_EXECUTABLE} CACHE)

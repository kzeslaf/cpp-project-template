cmake_minimum_required(VERSION 3.5)
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

add_subdirectory(3rd/googletest EXCLUDE_FROM_ALL)


#
# List additional files in QtCreator project tree.
#
add_custom_target(additional_project_files
    SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/.clang-format
        ${CMAKE_CURRENT_SOURCE_DIR}/.travis.yml
        ${CMAKE_CURRENT_SOURCE_DIR}/appveyor.yml
        ${CMAKE_CURRENT_SOURCE_DIR}/README.md
    )


#
# Turn off warning about unused QT_QMAKE_EXECUTABLE added by QtCreator
#
unset(${QT_QMAKE_EXECUTABLE} CACHE)

add_library(mymath mymath.cpp)

target_include_directories(mymath
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
    )

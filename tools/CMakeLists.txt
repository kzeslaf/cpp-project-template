add_executable(fib fib.cpp)

target_link_libraries(fib
    PRIVATE
        mymath
    )

target_compile_features(fib
    PRIVATE
        cxx_digit_separators
    )

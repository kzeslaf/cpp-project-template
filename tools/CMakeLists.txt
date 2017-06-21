add_executable(fib fib.cpp)

target_link_libraries(fib
    PRIVATE
        mymath
    )

target_compile_options(fib
    PRIVATE
        ${KZESLAF_DEFAULT_WARNINGS}
    )

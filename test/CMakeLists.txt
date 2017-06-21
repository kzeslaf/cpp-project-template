include_directories(
    "${PROJECT_SOURCE_DIR}/third-party/gtest/include"
    )

add_executable(test-libmymath
    main.cpp
    fib_test.cpp
    )

target_link_libraries(test-libmymath
    PRIVATE
        mymath
        gtest
    )

target_compile_options(test-libmymath
    PRIVATE
        ${KZESLAF_DEFAULT_WARNINGS}
    )

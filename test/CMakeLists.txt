include_directories(
    "${PROJECT_SOURCE_DIR}/src"
    "${PROJECT_SOURCE_DIR}/third-party/gtest-1.7.0/include"
    )

add_executable(test-libmymath main.cpp fib_test.cpp)
target_link_libraries(test-libmymath mymath gtest)

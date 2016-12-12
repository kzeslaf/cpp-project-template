include_directories ("${PROJECT_SOURCE_DIR}/src")
add_executable(fib fib.cpp)
target_link_libraries(fib mymath)

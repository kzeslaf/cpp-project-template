#include <gtest/gtest.h>
#include <func.h>


TEST(func_test, Test01)
{
    ASSERT_EQ(5, fib(5));
}

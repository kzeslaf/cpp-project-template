#include <gtest/gtest.h>
#include <mymath.h>

TEST(fib_test, PositiveValuesTest) {
  ASSERT_EQ(0, fib(0));
  ASSERT_EQ(1, fib(1));

  ASSERT_EQ(5, fib(5));
  ASSERT_EQ(21, fib(8));
}

#include "mymath.h"
#include <assert.h>

//! [fib_function]
int fib(int n) {
  assert(n >= 0);
  if (n < 2) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}
//! [fib_function]

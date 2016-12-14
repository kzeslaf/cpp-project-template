#include "mymath.h"
#include <assert.h>

int fib(int n) {
  assert(n >= 0);
  if (n < 2) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

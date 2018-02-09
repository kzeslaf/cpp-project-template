#include <stdio.h>
#include <stdlib.h>

#include <mymath.h>

namespace {

const char *USAGE =
    ""
    "Usage:\n"
    "\t./fib NUMBER\n";

const int DIGIT_SEPARATORS_TEST = 1'000'000;

}  // namespace

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("%s", USAGE);
    return 0;
  }

  printf("%d\n", fib(atoi(argv[1])));
  printf("%d\n", DIGIT_SEPARATORS_TEST);
  return 0;
}

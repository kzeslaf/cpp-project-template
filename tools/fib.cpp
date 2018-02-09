#include <stdio.h>
#include <stdlib.h>

#include <mymath.h>

namespace {

const char *USAGE =
    ""
    "Usage:\n"
    "\t./fib NUMBER\n";

}  // namespace

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("%s", USAGE);
    return 0;
  }

  printf("%d\n", fib(atoi(argv[1])));
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

#include <func.h>

const char *USAGE =
    ""
    "Usage:\n"
    "\t./fib NUMBER\n";

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("%s", USAGE);
    return 0;
  }

  printf("%d\n", fib(atoi(argv[1])));
  return 0;
}

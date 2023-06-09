#include <stdio.h>
#include <stdlib.h>

#include "fibonacci.h"

int main(int argc, char** argv) {
  if (argc != 2) {
    puts("Expected an argument\n");
    puts("To calculate the <number>th Fibonacci number:");
    printf("Usage: %s <number>\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  char* end = NULL;
  unsigned long long fib_index = strtoull(argv[1], &end, 10);

  printf("Fibonacci number %llu: %llu\n", fib_index, fibonacci(fib_index));
}

typedef unsigned long long ull;

unsigned long long fibonacci(unsigned long long index) {
  if (index == 0) return 0;
  if (index == 1) return 1;

  return fibonacci(index - 1) + fibonacci(index - 2);
}
unsigned long long fibonacci(unsigned long long index) {
  unsigned long long f1, f2, f3;
  f1 = 0; f2 = 0; f3 = 1;

  if (index == 0) {
    return 0;
  }

  for (int i = 1; i < index; ++i) {
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;
  }

  return f3;
}

#include <cstdio>
#include <cstdlib>

int fibonacci_impl(int a, int b, int c) {
  if (c == 0) {
    return b;
  } else {
    return fibonacci_impl(b, a + b, c - 1);
  }
}

int fibonacci(int i) {
  return fibonacci_impl(0, 1, i);
}

int main(int argc, char *argv[])
{
  int n;
  if (argc > 1) {
    n = atoi(argv[1]);
  }
  printf("%d\n", fibonacci(n));
  return 0;
}

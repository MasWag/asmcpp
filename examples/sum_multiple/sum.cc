#include <cstdio>
#include "sum.hh"

Sum::Sum() {
  sum = 0;
}
void Sum::add(int i) {
  sum += i;
}
void Sum::add2(int i, int j) {
  sum += i;
}
void Sum::print() {
  printf("%d\n", sum);
}

#include <cstdio>
#include "sum.hh"

int main(int argc, char *argv[])
{
  int i;
  Sum* sum = new Sum();
  while (scanf("%d ", &i) >= 0) {
    //    sum->add(i);
    sum->add2(i, i);
  }
  sum->print();
  return 0;
}

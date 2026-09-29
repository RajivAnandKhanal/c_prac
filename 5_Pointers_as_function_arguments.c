// Pointers as function arguments - call by refrence

#include <stdio.h>

void increment(int *ptr) { *(ptr) = *(ptr) + 1; }

int main() {

  int a = 12;

  increment(&a);

  printf("value of a is %d\n", a);

  return 0;
}

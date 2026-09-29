// Arrays as function arguments
// see copy for theory note

#include <stdio.h>

int sumX(int A[]) {
  printf("inside the fuction sumX\n");
  printf("the size of A is %d\n", sizeof(A));
  printf("the size of A[0] is %d\n", sizeof(A[0]));
  printf("\n");
}

int main() {

  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  printf("inside the main fuction\n");
  printf("the size of A is %d\n", sizeof(A));
  printf("the size of A[0] is %d\n", sizeof(A[8]));
  printf("\n");

  sumX(A);

  return 0;
}

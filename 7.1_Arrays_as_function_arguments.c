// character arrays and pointers

#include <stdio.h>

void Double(int *A, int size) {
  // int *A and int A[] acts as same, since the compiler does not makes new
  // array in this double function, but copies the address of first address of
  // array A, thus function is taking argumet by refrence
  int i, sum = 0;

  for (i = 0; i < size; i++) {
    A[i] = 2 * A[i];
  }
}

int main() {
  int A[] = {1, 2, 3, 4, 5};

  int size =
      sizeof(A) / sizeof(A[0]); // size of entire array divided by size of one
                                // element gives the total lenghn of array
  int i = 0;
  Double(A,
         size); // although only the function is called, the value of A[i] also
                // gets updated in main function is because when function is
                // taking array as argument, then calling that function does not
                // creates the whole new array in the double function, but just
                // passes the address of 1st element of array ie compiler
                // creates a pointer to that array and passed to the double
                // function instead of passing the whole array,
  // so when array is passed in the user defined function then always call by
  // refrence happens, and in result the value of vaiable also gets changes in
  // callee function, since call by refrence changes the value of original
  // variable in calee function

  for (i = 0; i < size; i++) {
    printf("%d\n", A[i]);
  }
  return 0;
}

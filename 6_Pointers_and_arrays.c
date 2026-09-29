// pointers and arrays

#include <stdio.h>

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  printf("arr        = %p\n", arr);
  printf("&arr       = %p\n", &arr);
  printf("&arr[0]    = %p\n", &arr[0]);
  printf("&arr[1]    = %p\n", &arr[1]);
  printf("arr[0]     = %d\n", arr[0]);
  printf("arr[1]     = %d\n", arr[1]);
  printf("*arr       = %d\n", *arr);
  printf("(*arr) + 1 = %d\n", (*arr) + 1);

  return 0;
}

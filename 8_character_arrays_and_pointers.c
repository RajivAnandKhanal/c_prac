// character arrays and pointers

#include <stdio.h>

int main() {
  char c1[] = "Hello";
  char *c2;
  c2 = c1; // this is possible since the name of array returns the address of 1st element of array and that address can be stored in new character pointer
  // now the c1 character array can be accessed via c2
  
  printf("c2[1] = %c\n",c2[1]);
  printf("c1[1] = %c\n",c1[1]);
}

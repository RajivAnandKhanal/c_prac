#include <stdio.h>

int main() {
  int new_var = 10;

  printf("new_var = %d\n", new_var);

  printf("\n");
  int *fst_ptr = &new_var;
  printf("fst_ptr = %p\n", fst_ptr);
  printf("*fst_ptr = %d\n", *fst_ptr);

  printf("\n");
  int **scd_ptr = &fst_ptr;          // storing address of fst_ptr
  printf("scd_ptr = %p\n", scd_ptr); // tells the value scd_ptr pointer is
                                     // storing ie address of fst_ptr
  printf(
      "*scd_ptr = %p\n",
      *scd_ptr); // go to address scd_ptr have stored and print that value ie
                 // scd_ptr have stored address of fst_ptr and the value at that
                 // address is address of new_var OR SIMPLY scd_ptr have stored
                 // some address go to that address and tell what is in it
  printf("**scd_ptr = %d\n", *(*scd_ptr));

  printf("\n");
  int ***thd_ptr;
  thd_ptr = &scd_ptr;                // storing the address of scd_ptr
  printf("thd_ptr = %p\n", thd_ptr); // address of scd_ptr
  printf("*thd_ptr = %p\n",
         *thd_ptr); // thd_ptr have stored some address tell me what is the
                    // value at that address OR thd_ptr have stored address of
                    // scd_ptr and the value at scd_ptr is address of fst_ptr
  printf("**thd_ptr = %p\n",
         *(*thd_ptr)); // *thd_ptr have stored some address tell me what is the
                       // value at that address OR *thd_ptr have stored address
                       // of fst_ptr (since thd_ptr stores address of scd_ptr
                       // and scd_ptr stores address of fst_ptr) and the value
                       // at fst_ptr is address of var
  printf("***thd_ptr = %d\n", *(*(*thd_ptr)));

  ***thd_ptr = **scd_ptr + 2;

  printf("\n");
  printf("After : ***thd_ptr = **scd_ptr + 2;\n");
  printf("new_var = %d\n", new_var);
  printf("fst_ptr = %p\n", fst_ptr);
  printf("*fst_ptr = %d\n", *fst_ptr);

  printf("\n");
  printf("scd_ptr = %p\n", scd_ptr);
  printf("*scd_ptr = %p\n", *scd_ptr);
  printf("**scd_ptr = %d\n", *(*scd_ptr));

  printf("\n");
  printf("thd_ptr = %p\n", thd_ptr);
  printf("*thd_ptr = %p\n", *thd_ptr);
  printf("**thd_ptr = %p\n", *(*thd_ptr));
  printf("***thd_ptr = %d\n", *(*(*thd_ptr)));

  return 0;
}

// during derefrencing
//* -> means go to address I (the pointer variable to be derefrenced) have
// stored, and tell me that value

#include <stdio.h>

int main()
{
  int var = 2;
  int *pointer1 = NULL;
  int **pointer2 = NULL;

  pointer1 = &var;
  pointer2 = &pointer1;

  printf("Now, the variable pointer1 stores %x and pointer2 stores %x which is the memory address of pointer1\n", pointer1, pointer2);

  return 0;
}

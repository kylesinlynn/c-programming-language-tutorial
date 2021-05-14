#include <stdio.h>

int main()
{
  int i = 3;
  int *pointer = NULL;
  pointer = &i;

  printf("Address of i in variable pointer %x\n", pointer);

  return 0;
}

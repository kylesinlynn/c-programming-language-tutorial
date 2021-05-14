#include <stdio.h>

int  main()
{
  int num = 3;
  int *pointer = NULL;
  pointer = &num;

  num += *pointer;
  (*pointer)++;
  printf("%x\n", pointer);

  return 0;
}

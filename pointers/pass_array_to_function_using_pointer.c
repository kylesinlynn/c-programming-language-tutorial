#include <stdio.h>

void print_array(int *array_ptr, int elements);

int main()
{
  /*
   * usually array cannot be through function's parameter
   * so the pointer becomes a way to pass the array through parameter
   */

  int num[3] = {4, 3, 2};
  int *ptr = NULL;

  ptr = num;

  print_array(ptr, 3);

  return 0;
}

void print_array(int *array_ptr, int elements)
{
  for(int i = 0; i < elements; i++)
    printf("Element at index %i is %i\n", i, array_ptr[i]);
}

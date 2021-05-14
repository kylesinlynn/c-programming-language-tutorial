#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  /* a block of 10 ints */
  ptr = malloc(10 * sizeof(*ptr));

  if(ptr != NULL)
    *(ptr + 2) = 50; /* assign 50 to third int */

  printf("%i\n", *(ptr+2));

  return 0;
}

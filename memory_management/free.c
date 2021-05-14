#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr = malloc(10 * sizeof(*ptr));
  if(ptr != NULL)
    *(ptr + 2) = 50; /* assign 50 to third int */
  printf("%d\n", *(ptr + 2));

  free(ptr);

  return 0;
}

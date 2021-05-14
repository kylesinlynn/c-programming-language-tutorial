#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 10;
  int y = 0;

  if(y != 0)
    printf("x / y = %d\n", x/y);
  else
  {
    printf("Divisor is 0, programme exiting.\n");
    exit(EXIT_FAILURE);
  }
  
  return 0;
}

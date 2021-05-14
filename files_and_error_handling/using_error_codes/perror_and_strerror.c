#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
  FILE *fptr;
  errno = 0;

  fptr = fopen("test.c", "r");
  if(fptr == NULL)
  {
    perror("Error");
    fprintf(stderr,  "%s\n", errno);
    exit(EXIT_FAILURE);
  }
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
  FILE *fptr;
  int c;
  
  errno = 0;

  fptr = fopen("myfile.txt", "r");
  if(fptr == NULL)
  {
    printf("Error opening file. %s\n", errno);
    exit(EXIT_FAILURE);
  }

  while((c = getc(fptr)) != EOF) /* read the rest of the file */
    printf("%c", c);

  if(ferror(fptr))
  {
    printf("I/O error reading file.");
    exit(EXIT_FAILURE);
  }
  else if(feof(fptr))
  {
    printf("End of file reached.\n");
  }

  return 0;
}

#include <stdio.h>

int main()
{
  FILE *fptr;
  char filename[50];
  printf("Enter the filename of the file to create: ");
  fgets(filename, sizeof(filename), stdin);
  fptr = fopen(filename, "w");

  /* write a file */
  fprintf(fptr, "Inventory\n");
  fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
  fputs("End of List", fptr);

  return 0;
}

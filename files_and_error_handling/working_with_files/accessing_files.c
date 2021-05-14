#include <stdio.h>

int main()
{
  /*
   * stdio.h includes file handling functions: FILE
   * fopen(file, mode)
   * mode options are:
   * -r open for reading - file must exist
   * -w open for writing - file needn't exist
   * -a open for append - file needn't exist
   * -r+ open for reading and writing from beginning
   * -w+ open for reading and writing, overwriting file
   * -a+ open for reading and wiriting, appending to file
   * fcloase(fp);
   */

  FILE *fptr;

  fptr = fopen("myfile.txt", "w");
  if(fptr == NULL)
  {
    printf("Error opening file.");
    return -1;
  }
  fclose(fptr);

  return 0;
}

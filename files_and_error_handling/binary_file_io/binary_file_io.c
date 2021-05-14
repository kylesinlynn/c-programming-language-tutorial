#include <stdio.h>

int main()
{
  /*
   * mode options for fopen()
   * rb open for reading (file must exist)
   * wb open for writing (file need not exist)
   * ab open for append (file need not exist)
   * rb+ open for reading and writing from beginning
   * wb+ open for reading and writing, overwriting file
   * ab+ open reading and writing, appending to file
   *
   * fwrite(ptr, item_size, num_items, fp)
   * Writes num_items items of item_size size from pointer ptr to the file
   p pointed to by file pointer fp
   *
   * fread(ptr, item_size, num_items, fp)
   * Reads num_items items of item_size size from the file pointed to by file
   * pointer fp into memory pointed to by ptr
   *
   * fclose(fp)
   * closes file opened with file fp, returning 0 if close was successful, EOF
   * is returned if there is an error in closing
   */

  FILE *fptr;
  int arr[10];
  int x[10];
  int k;

  /* generate array of numbers */
  for(k = 0; k < 10; k++)
    arr[k] = k;

  /* write array to file */
  fptr = fopen("datafile.bin", "wb");
  fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
  fclose(fptr);

  /* read array from file */
  fptr = fopen("datafile.bin", "rb");
  fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
  fclose(fptr);

  /* print array */
  for(k = 0; k < 10; k++)
    printf("%d\n", x[k]);

  return 0;
}

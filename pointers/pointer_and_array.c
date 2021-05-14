#include <stdio.h>

int main()
{
  int a[5] = {22, 33, 44, 55, 66};
  int *ptr = NULL;

  ptr = a; // ptr = &a[0]
  for(int i = 0; i < 5; i++)
    printf("%d\n", *(ptr + i));

  return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
  char *string[] = {
                    "this",
                    "is",
                    "a",
                    "robbery",
                    "!"
                    };
  
  for(int i = 0; i < strlen(*string); i++)
    printf("%s ", string[i]);
  printf("\n");

  return 0;
}

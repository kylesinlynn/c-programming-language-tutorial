#include <stdio.h>

char *array(int, int);

int main()
{
  char *characters = array(65, 67);

  for(int i = 0; i < 2; i++)
    printf("Character at index %i is %c\n", i, characters[i]);

  return 0;
}

char *array(int start, int end)
{
  static char character[2];
  
  character[0] = start;
  character[1] = end;

  return character;
}

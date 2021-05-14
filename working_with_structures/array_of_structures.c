#include <stdio.h>

typedef struct
{
  int h;
  int w;
  int l;
} box;

int main()
{
  box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
  int volume;
  
  for(int i = 0; i < 3; i++)
  {
    printf("h\tw\tl\n");
    printf("%i\t%i\t%i\n\n", boxes[i].h, boxes[i].w, boxes[i].l);
  }

  return 0;
}

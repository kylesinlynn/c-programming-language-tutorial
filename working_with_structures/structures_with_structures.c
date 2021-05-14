#include <stdio.h>

typedef struct
{
  int x;
  int y;
} point;

typedef struct
{
  float radius;
  point centre;
} circle;

int main()
{
  circle c = {4.5, {1, 2}};
  printf("%3.1f %d, %d\n", c.radius, c.centre.x, c.centre.y);

  return 0;
}

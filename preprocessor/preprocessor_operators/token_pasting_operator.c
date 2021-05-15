#include <stdio.h>
#define VAR(name, num) name##num

int main()
{
  int x1 = 125, x2 = 250, x3 = 500;

  printf("%d\n", VAR(x, 3));

  return 0;
}

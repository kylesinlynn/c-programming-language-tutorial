#include <stdio.h>

int add(int, int);
int substract(int, int);
int multiply(int, int);
int divide(int, int);

int main()
{
  int x, y, choice, result;
  int (*op[4])(int, int);

  op[0] = add;
  op[1] = substract;
  op[2] = multiply;
  op[3] = divide;

  printf("Enter two integers: ");
  scanf("%d%d", &x, &y);
  printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
  scanf("%d", &choice);

  result = op[choice](x, y);
  printf("%d\n", result);

  return 0;
}

int add(int x, int y)
{
  return x+y;
}

int substract(int x, int y)
{
  return x-y;
}

int multiply(int x, int y)
{
  return x*y;
}

int divide(int x, int y)
{
  if(y == 0) return 0;
  return x/y;
}

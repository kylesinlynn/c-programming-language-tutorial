#include <stdio.h>

int main()
{
  char info[] = "London";
  char city[10];
  char country[10];
  int population;

  sscanf(info, "%s %s %d", city, country, population);
  printf("%d people live in %s, %s.", population, city, country);

  return 0;
}

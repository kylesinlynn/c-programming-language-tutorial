#include <stdio.h>

int main()
{
  char str1[] = "Hello World!";
  char str2[] = {'h', 'i', '\0'};
  char name[50], city[30];

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);

  printf("Enter your city name: ");
  scanf("%s", city);

  // output
  printf("You are ");
  fputs(name, stdout);
  printf("And, you live in ");
  puts(city);

  return 0;
}

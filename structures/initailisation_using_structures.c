#include <stdio.h>

struct student
{
  int age;
  int grade;
  char name[40];
};

int main()
{
  struct student s1 = {19, 9, "John"};
  struct student s2 = {22, 10, "Batman"};
  struct student s3;
  s3 = (struct student){1, 3, "John"};

  return 0;
}

#include <stdio.h>

struct student
{
  char name[50];
  int number;
  int age;
};

void show_student_data(struct student *st)
{
  printf("\nStudent:\n");
  printf("Name: %s\n", st->name);
  printf("Number: %d\n", st->number);
  printf("Age: %d\n", st->age);
}

int main()
{
  struct student st1= {"Krishna", 5, 21};
  show_student_data(&st1);

  return 0;
}

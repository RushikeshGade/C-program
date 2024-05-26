#include<stdio.h>

struct student
{
   int rollno;
   char division;
   int age;
   float mark;
   int salary;
};

int main ()
{
  struct student amit;
  struct student pooja;

  printf("size of obect is : %d\n",sizeof(amit));

  amit.rollno =11;
  amit.division  = 'A';
  amit.mark = 90.89;
  amit.age = 19;
  amit.salary = 21000;

   pooja.rollno =21;
   pooja.division  = 'D';
   pooja.mark = 93.89;
   pooja.age = 17;
   pooja.salary = 5000;

   printf("age of amit is :%d\n ",amit.age);
   printf("age of pooja is :%d\n ",pooja.age);

    printf("salary of amit is :%d\n ",amit.salary);
    printf("salary of pooja is :%d\n ",pooja.salary);

    return 0;
}
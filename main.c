#include<stdio.h>

int x = 21;

extern int no;

extern void Marvellous();

int main()
{
  printf("value of x is : %d\n",x);

  printf("value of x is : %d\n",no);

  Marvellous();

    return 0;
}

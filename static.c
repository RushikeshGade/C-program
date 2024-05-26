#include<stdio.h>

void Marvellous()
{
  int x = 10;
  x++;
  printf("value of x is :%d\n",x);

}
int main()
{
  printf("Demonstration of auto storage class...\n");

   Marvellous();
   Marvellous();
   Marvellous();

    return 0;
}
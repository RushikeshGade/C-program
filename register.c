#include<stdio.h>

void Marvellous()
{
  int i = 11;
  register int j = 21;
  register int k;

  printf("%d\n",k);

}
int main()
{
  printf("demonstration of register storage class...\n");

  
  Marvellous();

    return 0;
}
#include<stdio.h>

int main()
{
    int value1 = 0, value2 = 0, Ret = 0;

    printf("Enter first number : \n");
    scanf("%d", &value1);

    printf("Enter second  number : \n");
    scanf("%d", &value2);

    Ret = value1 *  value2;

    printf("multiplication is : %d\n",Ret);

    return 0 ;
}
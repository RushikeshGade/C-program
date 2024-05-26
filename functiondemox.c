#include<stdio.h>

int multiplication(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 * No2;
    return Ans;

}

int main()
{
    int value1 = 0, value2 = 0, Ret = 0;

    printf("Enter first number : \n");
    scanf("%d", &value1);

    printf("Enter second  number : \n");
    scanf("%d", &value2);

    Ret = multiplication(value1 , value2);

    printf("multiplication is : %d\n",Ret);

    return 0 ;
}
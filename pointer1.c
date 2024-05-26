#include<stdio.h>

int main()
{
    int No = 11;
    int *ptr =&No;
    
    double Data = 90.999;
    double *dptr = &Data;
    printf("%d\n",No);
    printf("%d\n",Data);
    

    printf("%d\n",sizeof(No));
    printf("%d\n",sizeof(ptr));
    printf("%d\n",sizeof(Data));
    printf("%d\n",sizeof(dptr));

    printf("%d\n",*ptr);
    printf("%d\n",dptr);

    
    return 0;

}
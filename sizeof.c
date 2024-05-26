#include<stdio.h>

int main()
{
    char ch = 'a';
    int i = 11;
    float f = 90.89;
    double d = 90.76845;

    printf("%lu\n",sizeof(ch));
    printf("%lu\n",sizeof(i));
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(d));

    printf("%lu\n",sizeof(d));

    return 0;
}
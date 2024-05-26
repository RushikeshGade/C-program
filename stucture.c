#include<stdio.h>

struct demo
{
    int no ;
    float f;
    double d;
};

int main()
{
   struct demo obj ; 

   obj.no = 11;
   obj.f = 90.99;
   obj.d = 90.9999;

   printf("%d\n",obj.no);
   printf("%d\n",obj.f);
   printf("%d\n",obj.d);

    return 0 ;
}

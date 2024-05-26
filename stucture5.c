#include<stdio.h>
struct demo
{
    int *p;
    float*q;
};

int main()
{
   struct demo obj;
   int no = 11;
   float f= 90.89;

   obj.p=&no;
   obj.q=&f;

   printf("%d\n",*(obj.p));
   

   printf("%f\n",*(obj.q));

 return 0;
}
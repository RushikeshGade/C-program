#include<stdio.h>

int main()

{

  int no = 10;

  printf("value of no : %d \n ", no) ;
  printf("Address of no : %lu \n" , &no) ;
  printf("size of no : %d \n ",sizeof (no) );  

  no++;
  
  printf("value of no : %d \n ", no) ;

  no--;
  
  printf("value of no : %d \n ", no) ;



    return 0;
}
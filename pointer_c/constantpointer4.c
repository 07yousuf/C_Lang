//pointer to constant variable
#include<stdio.h>
int main()
{
      int a=5;
      const int b=6;
      int *p;
      const int *q; //pointer to constant variable 
      
      p=&a;
      printf("%d\n",*p);

      q=&b;
      printf("%d",*q);
}
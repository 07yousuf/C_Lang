#include<stdio.h>
int main()
{
      int a=5;
      const int c=7,b=6;
      const int *q=&b;
      printf("%d\n",*q);
      q=&c;
      printf("%d\n",*q);

      int *const p=&a;
      printf("%p",&p);

}
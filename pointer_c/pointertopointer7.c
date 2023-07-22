#include<stdio.h>
int main()
{
      int a,*p;
      scanf("%d",&a);
      p=&a;
      int **q;
      q=&p;

      printf("%d\n",**q);
      printf("%p\n",*q);
      printf("%p\n",q);
}
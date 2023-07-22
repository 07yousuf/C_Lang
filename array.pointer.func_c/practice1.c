#include<stdio.h>
int main()
{
      int a=10,b=3,sum1,sum2;
      sum1=a++ +b;
      sum2=++a +b;
      printf("%d %d",sum1,sum2);
}
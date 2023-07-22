#include<stdio.h>
int main()
{
      int num1,num2,sum;
      scanf("%d\n%d",&num1,&num2);
      int *p1,*p2;
      p1=&num1;
      p2=&num2;
      sum= *p1 + *p2;
      printf("%d",sum);
}
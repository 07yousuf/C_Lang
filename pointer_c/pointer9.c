#include<stdio.h>
void swap_number(int *x,int *y)
{
      int *temp;
      temp=x;
      x=y;
      y=temp;
      printf("After swapped value\na is : %d\nb is : %d",*x,*y);
}
int main()
{
      int a=5,b=10;
      printf("Before swapped value\na is :%d\nb is :%d\n",a,b);
      swap_number(&a,&b);
      return 0;
}

#include<stdio.h>
void add();
int main()
{
      int a,b;
      scanf("%d \n%d",&a,&b);
      printf("a=%d, b=%d\n",a,b);
      add(a,b);
      printf("a=%d, b=%d",a,b);
}
void add(int a,int b)
{
      a=a+10;
      b=b+10;
      int c=a+b;
      printf("%d\n",c);
}
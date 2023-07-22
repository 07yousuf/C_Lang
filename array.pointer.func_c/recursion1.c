#include<stdio.h>
void display();
int main()
{
      display(3);
      return 0;
}
void display(int n)
{
      if(n>0)
      printf("%d",n);
      display(n-1);
}
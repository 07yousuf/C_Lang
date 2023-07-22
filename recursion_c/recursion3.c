#include<stdio.h>
void func();
int main()
{
      int n;
      scanf("%d",&n);
      func(n);
      return 0;
}
void func(int n)
{
      if(n==0) {
            return;
      }
      printf("iya rafeu\n");
      func(n-1);
      return;
}
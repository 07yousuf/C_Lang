#include<stdio.h>

int func();

int main()
{
      int n;
      scanf("%d", &n);
      func(n);
      return 0;
}

int func(int n)
{
      if (n <= 0){ 
            return 0;
      }
      printf("%d ",n);
                  /*in Decreasing time- printf() 
                  just upper the line of recursive call()*/
      return func(n - 1);
}

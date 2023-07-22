#include<stdio.h>
int factorial(int a)
{
      int fact=1;
      for(int i=1; i<=a; i++){

            fact = fact*i;
      }
      return fact;
}
int combination(int x,int y)
{
      int nCr = factorial(x) / (factorial(y)*factorial(x-y));
      return nCr;
}
int main()
{
      int n,result;
      printf("enter n:\n");
      scanf("%d",&n);
      
      for(int i=0; i<=n; i++){
            for(int j=0; j<=i; j++){
                  result = combination(i,j);
                  printf("%d ",result);
            }
            printf("\n");
      }
      return 0;
}

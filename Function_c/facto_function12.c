#include<stdio.h>
int factorial(int a)
{
      int facto=1;
      for(int i=2;i<=a;i++){
            facto=facto*i;
      }
      return facto;
}
int main()
{
      int n,facto;
      printf("Enter a number: ");
      scanf("%d",&n);
      facto=factorial(n);
      printf("%d",facto);
      return 0;
}
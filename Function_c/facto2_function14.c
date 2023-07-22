#include<stdio.h>
int factorial(int x)
{
      int fact=1;
      for(int i=1; i<=x; i++){
            fact=fact*i;
      }
      return fact;
}
int main()
{
      int n,r,i,result_ncr;
      printf("enter n and r value:\n");
      scanf("%d %d",&n,&r);

      result_ncr = factorial(n) / (factorial(r) * factorial(n-r));
      printf("%d",result_ncr);

}

//Basic way
/*#include<stdio.h>
int result;
int factorial(int a,int b)
{
      int facto_n=1;
      for(int i=2;i<=a;i++){
            facto_n=facto_n*i;
      }
      int facto_r=1;
      for(int i=2;i<=b;i++){
            facto_r=facto_r*i;
      }
      int facto_nr=1;
      for(int i=1; i<=(a-b); i++){
            facto_nr=facto_nr*i;
      }
      result=facto_n / (facto_r * facto_nr);
      return result;
}
int main()
{
      int n,r,facto;
      printf("Enter a number: ");
      scanf("%d %d",&n,&r);
      result=factorial(n,r);
      printf("%d",result);
      return 0;
}*/     

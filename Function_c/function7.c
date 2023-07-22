#include<stdio.h>
void primenum();
int main()
{
      int a;
      scanf("%d",&a);
      primenum(a);
      return 0;
}
void primenum(int x)
{
      int i,indicator=1;
      for(i=2; i<=x/2; i++){
            if(x%i==0){
                  indicator==0;
                  break;
            }
            
            if(indicator==1){
                  printf("prime number");
            }
            else{
                  printf("Not Prime Number");
            }
      }
}
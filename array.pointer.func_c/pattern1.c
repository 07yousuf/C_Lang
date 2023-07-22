#include<stdio.h>
void pattern();
int main()
{     
      int n;
      scanf("%d",&n);
      pattern(n);
}
void pattern(int x)
{
      for(int i=1; i<=x; i++){
            for(int j=1; j<=x; j++){
                  printf("*");
            }
            printf("\n");
      }     
}
#include<stdio.h>
void pattern2();
int main()
{
      int n;
      scanf("%d",&n);
      pattern2(n);
      return 0;
}
void pattern2(int x)
{
      for(int i=1; i<=x; i++){
            for(int j=1; j<=i; j++){
                  printf("*");
            }
            printf("\n");
      }
}
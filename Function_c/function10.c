#include<stdio.h>
void pattern();
void pattern2();
int main()
{     
      int a,b;
      pattern(a);
      pattern2(b);
      return 0;
}
void pattern(int x)
{
      for(int i=1; i<=5; i++){
            for(int j=1; j<=i; j++){
                  printf("%d",i);
            }
            printf("\n");
            
      }
}
void pattern2(int y)
{
      for(int i=1; i<=5; i++){
            for(int j=1; j<=5; j++){
                  if(i==5 && j==1 && i==j){
                        printf("*");
                  }
                  else{
                        printf(" ");
                  }
            }
            printf("\n");
      }
}
#include<stdio.h>
int main()
{
      int num;
      scanf("%d",&num);
      printf("enter numbers");
      for(int i=1; i<=num; i++){
      scanf("%d\n",&i);
      }
      printf("reverse order numbers are: ");
      for(int i=num; i>=1; i--){
            printf("%d",i);
      }
}
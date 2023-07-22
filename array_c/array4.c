#include<stdio.h>
int main()
{
      int i,sum=0;
      int a[5];
      printf("Elements are-\n");
      for(i=0; i<5; i++){
            scanf("%d",&a[i]);
            sum= sum+a[i];
      }
      printf("%d",sum);
}
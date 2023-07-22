#include<stdio.h>
int main()
{
      int array[100];
      int i,size,sum=0;
      scanf("%d",&size);
      for(i=0; i<size; i++){
            scanf("%d",&array[i]);
      }
      for(i=0; i<size; i++){
            sum+=array[i];
      }
      printf("%d",sum);
}
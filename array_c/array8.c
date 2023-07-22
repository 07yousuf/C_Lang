#include<stdio.h>
#define MAX_SIZE 100
int main()
{
      int array[MAX_SIZE];
      int i,m=0,size;
      scanf("%d",&size);
      for(i=0; i<size; i++){
            scanf("%d",&array[i]);
      }
      for(i=0; i<size; i++){
            if(array[i]<m){
                  printf("%d",array[i]);
            }
      }
}
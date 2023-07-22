#include<stdio.h>
#define MAX_SIZE 100
int main()
{
      int array[MAX_SIZE];
      int i,j,size;
      scanf("%d",&size);
      for(i=0; i<size; i++){
            scanf("%d",&array[i]);
      }
      int max=array[0];
      for(i=0; i<size; i++){
            if(array[i]>max){
                  max=array[i];
            }
      }
      int min=array[0];
      for(i=0; i<size; i++){
            if(array[i]<min){
                  min=array[i];
            }
      }
      printf("Maximum element- %d\n",max);
      printf("Minimum element- %d",min);
}
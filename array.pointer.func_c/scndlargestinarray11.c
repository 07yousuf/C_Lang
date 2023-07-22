#include<stdio.h>
#define MAX_SIZE 100
int main()
{
      int array[MAX_SIZE];
      int i,scnd_max,size;
      scanf("%d",&size);
      for(i=0; i<size; i++){
            scanf("%d",&array[i]);
      }
      int max=array[0];
      for(i=0; i<size; i++){
            if(array[i]>max){
                  scnd_max=max;
                  max=array[i];
            }
      }
      for(i=0; i<size; i++){
            if(array[i]<max && array[i]>scnd_max){
                  scnd_max=array[i];
            }
      }
      printf("Second Maximum element- %d\n",scnd_max);
}
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
      int array[MAX_SIZE];
      int i,even=0,odd=0,size;
      scanf("%d",&size);
      for(i=0; i<size; i++){
            scanf("%d",&array[i]);
      }
      for(i=0; i<size; i++){
            if(array[i]%2==0){
                  even++;
            }
            if(array[i]%2!=0){
                  odd++;
            }
      }
      printf("Total elments of Even- %d\n",even);
      printf("Total elments of odd- %d",odd);
}
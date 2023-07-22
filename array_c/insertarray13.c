/*#include<stdio.h>
int main()
{
      int array[100];
      int i,position,number,size;

      scanf("%d",&size);
      scanf("%d %d",&position,&number);
      for(i=0; i<size; i++){
            scanf("%d",&array[i]);
      }
      

      for(i=size-1; i>=position; i--){
            array[i+1]=array[i];
      }
      array[position]=number;
      size++;
      for(i=0; i<size; i++){
            printf("%d ",array[i]);
      }
      printf("\n");
      return 0;
}*/
//Not complete
#include<stdio.h>
int main()
{
      int array[100];
      int i,position,number,size,count;

      scanf("%d",&size);
     
      for(i=0; i<size; i++){
            scanf("%d",&array[i]);
      }
      scanf("%d %d %d",&position,&number,&count);
      
      for(i=size-1; i>=position; i--){
            array[i+3]=array[i];
      }


      for(i=position; i<=count; i++){
      array[position]=number;
      size++;
      }
      for(i=0; i<size; i++){
            printf("%d ",array[i]);
      }
      printf("\n");
      return 0;
}
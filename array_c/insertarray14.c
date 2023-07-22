#include<stdio.h>
int main()
{
      int arr[100];
      int size,posi,value;
      scanf("%d",&size);

      for(int i=0; i<size; i++){
            scanf("%d",&arr[i]);
      }
      printf("Index position:\n");
      scanf("%d",&posi);
      printf("Enter the value:\n");
      scanf("%d",&value);
      if(posi<0 || posi>size){
            printf("invalid index position\n");
            return 0;
      }
      for(int i=size-1; i>=posi; i--){
            arr[i+1]=arr[i];
      }
      arr[posi]= value;
      size++;
      for(int i=0; i<size; i++){
            printf(" %d",arr[i]);
      }

      return 0;
}
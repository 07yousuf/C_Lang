#include<stdio.h>
int main()
{     
      int size,posi;
      char posi_value; 
      printf("Array elements size:\n");
      scanf("%d",&size);
      
      char str[100];
      for(int i=0; i<size; i++){
            scanf("%c",&str[i]);
      }
      // printf("Enter index position:\n");
      scanf("index is %d Character is%c",&posi,&posi_value);
      // printf("Enter a character: \n");
      // scanf("%c",&posi_value);

      for(int i=size-1; i>=posi; i++){
            str[i+1]=str[i];
      }
      str[posi] = posi_value;
      size++;

      for(int i=0; i<size; i++){
            printf("%c",str[i]);
      }
}
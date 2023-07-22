#include<stdio.h>
int main()
{
      int arr[100],size;
      scanf("%d",&size);
      for(int i=0; i<size; i++){
      scanf("%d\n",&arr[i]);
      }
      for(int i=size-1; i>=0; i--){
            printf("%d\n",*(arr+i));
      }

}
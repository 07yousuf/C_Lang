//swap array each other
#include<stdio.h>
int main()
{
      int temp;
      int arr[4]={1,2,3,5};
      int arr2[4]={2,3,1,6};
      for(int i=0; i<4; i++){
      temp=*(arr+i);
      *(arr+i)=*(arr2+i);
      *(arr2+i)=temp;
      }
      printf("Array1 elements is:\n");
      for(int i=0; i<4; i++){
            printf("%d ",*(arr+i));
      }
      printf("\n");
      printf("Array2 elements is:\n");
      for(int i=0; i<4; i++){
            printf("%d ",*(arr2+i));
      }
}
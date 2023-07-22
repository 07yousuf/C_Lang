#include<stdio.h>
int main()
{
      int arr[4]={4,5,3,7};
      int *p;
      p=arr;
      for(int i=0; i<4; i++){
            printf("%d\n",*(arr+i));
      }
}
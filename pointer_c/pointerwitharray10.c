#include<stdio.h>
int main()
{
      int arr[4]={5,6,7,3};
      //basic way to find arrays addresses
      printf("%p\n",&arr); //&arr is same to &arr[0]
      printf("%p\n",arr[3]);

      //basic way to read arrays elements
      printf("%d\n",*arr);
      printf("%d\n",*(arr+3));

      
      for(int i=0; i<4; i++){
            printf("%p\n",&arr[i]);
      }

      for(int i=0; i<4; i++){
            printf("%d\n",*(arr+i));
      }

}
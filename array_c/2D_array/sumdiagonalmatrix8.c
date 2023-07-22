#include<stdio.h>
int main()
{
      int arr[100][100];
      int r,c,sum=0;
      scanf("%d %d",&r,&c);

      printf("Array elements:\n");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d",&arr[i][j]);
            }
      }
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  if(i==j){
                        sum += arr[i][j];
                  }
            }
      }
      printf("Summation of diagonal elements is:\n");
      printf("%d",sum);
}
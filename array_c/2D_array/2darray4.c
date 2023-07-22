//add two arrays without using extra array
#include<stdio.h>
int main()
{
      int r,c;
      int arr1[100][100],arr2[100][100];
      scanf("%d %d",&r,&c);
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d ",&arr1[i][j]);
            }
      }
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d ",&arr2[i][j]);
            }
      }
      for(int i=0; i<r; i++){
            for(int j=0; j<c;j++){
                  arr1[i][j] =arr1[i][j] + arr2[i][j];
            }
      }
      for(int i=0; i<r; i++){
            for(int j=0; j<c;j++){
                  printf(" %d ",arr1[i][j]);
            }
      }
}
#include<stdio.h>
int main()
{
      int r,c,multi;
      int arr[100][100];
      int arr2[100][100];
      printf("Enter the row and column size:\n");
      scanf("%d %d",&r,&c);

      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d",&arr[i][j]);
            }
      }
      printf("Enter multiply number: \n");
      scanf("%d",&multi);
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  arr2[i][j] = multi*arr[i][j];
            }
      }
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  printf(" %d ",arr2[i][j]);
            }
            printf("\n");
      }
      return 0;
}
#include<stdio.h>
int main()
{
      int r,c;
      int arr[100][100];
      scanf("%d %d",&r,&c);

      int max=arr[0][0];
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d",&arr[i][j]);
                  }
            }
      
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  if(max<arr[i][j]){
                        max=arr[i][j];
                  }
            }
      }
      printf("%d",max);
}
#include<stdio.h>
int main()
{
      int arr[3][4]={{1,2,5,7},{3,5,7,3},{2,3,8,9}};
      //print this array
      for(int i=0; i<3; i++){
            for(int j=0; j<4; j++){
                  printf(" %d",arr[i][j]);
            }
            printf("\n");
      }
}
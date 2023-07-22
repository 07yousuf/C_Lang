#include<stdio.h>
int main()
{
      int arr1[100][100];
      int arr2[100][100];
      int r,c,equal;
      scanf("%d %d",&r,&c);
      printf("First arrays elements:\n");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d",&arr1[i][j]);
            }
      }
      printf("Second arrays elements:\n");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d",&arr2[i][j]);
            }
      }
      equal = 1;//assume matrices are equal

      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  if(arr1[i][j] != arr2[i][j]){
                        equal=0;
                        break;
                  }
            }
            if(equal == 0){
                  break;
            }
      }
      if(equal == 1){
            printf("Both arrays elements are equal");
      }
      else{
            printf("Not equal");
      }

}
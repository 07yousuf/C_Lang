#include<stdio.h>
int main()
{
      int r,c;
      scanf("%d %d",&r,&c);
      int arr1[r][c],arr2[r][c],result[r][c];
      printf("Enter elements of the first array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
     printf("Enter elements of the second array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
     printf("Addition of the two arrays:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
      return 0;
}

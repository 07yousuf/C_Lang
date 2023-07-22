 #include<stdio.h>
int main()
{     
      int r,c;
      int arr[100][100];
      printf("enter the size of Row and Column:\n");
      scanf("%d\n%d",&r,&c);
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf(" %d",&arr[i][j]);
            }
      }
      printf("Here the matrix:\n");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  printf(" %d",arr[i][j]);
            }
            printf("\n");
      }
}
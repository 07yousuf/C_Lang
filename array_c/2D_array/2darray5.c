//summation of arrays elements
#include<stdio.h>
int main()
{
      int n,m,sum=0;
      int arr[100][100];
      scanf("%d %d",&n,&m);
      
      for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                  scanf("%d",&arr[i][j]);
            }
      }
      for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                  sum += arr[i][j];
            }
      }
      printf("%d",sum);
}

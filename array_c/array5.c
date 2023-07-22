#include<stdio.h>
int main()
{
      int i,n,a[100],b[100];
      printf("How many elements you need- ");
      scanf("%d",&n);
      for (i=0; i<n; i++){
            scanf("%d",&a[i]);
      }
      for(i=0; i<n; i++){
            b[i]=a[i];
      }
      printf("\nElements of first array are- \n");
      for(i=0; i<n; i++){
            printf("%d ",a[i]);
      }
      printf("\nElements of copy array are- \n");
      for(i=0; i<n; i++){
            printf("%d ",b[i]);
      }
}
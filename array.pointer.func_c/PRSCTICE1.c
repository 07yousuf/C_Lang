/*#include<stdio.h>
int main()
{
      int i,j,n,arr[100],count=0;
      scanf("%d",&n);
      for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
      }
      for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                  if(arr[i]==arr[j]){
                        count++;
                        break;
                  }
            }
      }
      printf("%d",count);
}*/
#include<stdio.h>
int main()
{
      int i,j,k,n,arr[100],count=0;
      scanf("%d",&n);
      for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
      }
      for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                  if(arr[i]==arr[j]){
                        for(k=j; k<n-1; k++){
                              arr[k]=arr[k+1];
                        }
                        n--;
                  j--;
                  }
            }
      }
      for(i=0; i<n; i++){
            printf("%d",arr[i]);
      }
}
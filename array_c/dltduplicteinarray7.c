#include<stdio.h>
#define MAX_SIZE 100
int main()
{
      int arra[MAX_SIZE];
      int i,j,k,size;
      scanf("%d",&size);
      for(i=0; i<size; i++){
            scanf("%d",&arra[i]);
      }

      for(i=0; i<size; i++){
            for(j=i+1; j<size; j++){
                  if(arra[i]==arra[j]){
                        for(k=j; k<size-1; k++){
                              arra[k]=arra[k+1];
                        }
                        size--;
                        j--;
                  }
                  
            }
      }
      for(i=0; i<size; i++){
            printf("%d",arra[i]);
      }
}

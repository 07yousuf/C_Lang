#include<stdio.h>
int main()
{
      int arr[100][100];
      int r,size,c,posi,value,posi_r,posi_c;
      scanf("%d %d",&r,&c);

      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d",&arr[i][j]);
            }
      }
      printf("Index position:\n");
      scanf("%d %d",&posi_r,&posi_c);
      printf("Enter the value:\n");
      scanf("%d",&value);
      if((posi_r||posi_c)<0 || (posi_r||posi_c)>size){
            printf("invalid index position\n");
            return 0;
      }
      for(int i=r-1; i>=posi_r; i--){
           for (int j=c-1; j>=posi_c; j--){
           arr[i+1][j+1]=arr[i][j];
           }
      }
      arr[posi_r][posi_c]= value;
      size++;
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  printf(" %d",arr[i][j]);
            }
            printf("\n");
      }

      return 0;
}
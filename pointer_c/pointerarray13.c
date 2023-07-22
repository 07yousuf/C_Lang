
#include<stdio.h>
void arr_swap(int *x,int *y,int z)
{
      for(int i=0; i<z; i++){
      int temp;
      temp=*(x+i);
      *(x+i)=*(y+i);
      *(y+i)=temp;
      }
      printf("after swaped array: \n");
      printf("1st arrays elements are\n");
      for(int i=0; i<z; i++){
            printf("%d\n",*(x+i));
      }
      printf("\n\n");
      printf("2nd arrays elements are\n");
      for(int i=0; i<z; i++){
            printf("%d\n",*(y+i));
      }
}
int main()
{
      int arr1[100],arr2[100],size;
      printf("enter arrays size: ");
      scanf("%d",&size);

      printf("enter 1st arrays elements:\n");
      for(int i=0; i<size; i++){
            scanf("%d",&arr1[i]);
      }
      printf("enter 2nd arrays elements:\n");
      for(int i=0; i<size; i++){
            scanf("%d",&arr2[i]);
      }
      printf("1st arrays elements:\n");
      for(int i=0; i<size; i++){
            printf("%d",arr1[i]);
      }
      printf("\n");
      printf("2nd arrays elements:\n");
      for(int i=0; i<size; i++){
            printf("%d",arr2[i]);
      }
      printf("\n");
      arr_swap(arr1,arr2,size);
      return 0;
}

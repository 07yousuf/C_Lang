#include<stdio.h>
int main()
{
      int n,indx_num;
      char value;
      printf("enter the number of elements of array;\n");
      scanf("%d\n",&n);
      char arr_str[n];
      for(int i=0; i<n; i++){
            scanf(" %c",&arr_str[i]);
      }
      printf("enter index number:\n");
      scanf("%d",&indx_num);
      printf("enter char:\n");
      scanf(" %c",&value);
      arr_str[indx_num]= value;

      for(int i=0; i<n; i++){
            printf(" %c",arr_str[i]);
      }
}
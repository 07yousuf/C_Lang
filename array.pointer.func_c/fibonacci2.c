//nth fibonacci number
#include<stdio.h>
int main(){
      int n,first=0,second=1,next;
      printf("Enter the value of n= ");
      scanf("%d",&n);
      if(n==1){
            printf("Enter the value of n: %d",first);
      }
      for(int i=0; i<=n; i++){
            next= first + second;
            printf("%d\n",next);
            first= second;
            second= next;
      }
      printf("Enter the value of n: %d",second);
      return 0;
}
#include<stdio.h>
int main(){
      int n,first=0,second=1,next;
      scanf("%d",&n);
      for(int i=0; i<=n; ++i){
            printf("%d\n",first);
            next= first + second;
            first= second;
            second= next;
      }
      return 0;
}

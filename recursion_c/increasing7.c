#include<stdio.h>
int result(int,int);
int main(){
      int x=1,n;
      scanf("%d",&n);
      result(x,n);
      return 0;

}
int result(int x,int n){
      if(n<=0){
            return 0;
      }
      result(x,n-1);
      printf("%d\n",n);
      return 0;
}
#include<stdio.h>
int result(int,int);
int main(){
      int s=0,n;
      scanf("%d",&n);
      result(n,s);
      return 0;

}
int result(int n,int x){
      int sum;
      if(n<=0){
            printf("%d",x);
            return 0;
      }
      result(n-1,x+n);
      return sum;
}
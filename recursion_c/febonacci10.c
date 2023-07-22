#include<stdio.h>
int febonacci();
int main(){
      int n;
      scanf("%d",&n);
      febonacci(n);

}
int febonacci(int x){
      if(x==0 || x==1){
            return 1;
      }
      int sum,a,b;
      sum=a+b;
      a=b;
      b=sum;
      //return febonacci();

}
#include<stdio.h>
int stair_path(int);
int a=1,b=1,sum=0;
int main(){
      int n;
      scanf("%d",&n);
      int ans= stair_path(n);
      printf("%d",ans);
}
int stair_path(int x){
      if(x<=2){
            return x;
      }
      for(int i=0; i<=x; i++){
            sum = a+b;
            a=b;
            b=sum;
      }
      int equ1= stair_path(x-1);
      int equ2= stair_path(x-2);
      int equ= equ1 + equ2;
      return equ;
}
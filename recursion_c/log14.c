#include<stdio.h>
int logrec(int, int);
int main(){
      int n,s;
      printf("enter a base number:\n");
      scanf("%d",&n);
      printf("enter a power number:\n");
      scanf("%d",&s);
      int ans = logrec(n,s);
      printf("%d",ans);
}
int logrec(int x,int y){
      if(y==0){
            return 1;
      }
      int equ1= logrec(x,y/2);
      if(y%2==0){
            return equ1 * equ1;
      }      
      else{
            return equ1 * equ1 * x;
      }
}
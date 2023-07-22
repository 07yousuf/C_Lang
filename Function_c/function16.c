#include<stdio.h>
int multiply(int);
int main(){
      int n=10;
      for(int i=1; i<=n; i++){
            int result=multiply(i);
            printf("%d\n",result);
      }
}
int multiply(int a){
      return a*10;
}
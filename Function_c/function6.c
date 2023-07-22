//Program to check whether a number is even or odd
//argument or parameter with return type function
#include<stdio.h>
int checking(int);
int main(){
      int a;
      scanf("%d",&a);
      checking(a);
}
int checking(int a){
      if(a%2==0){
            printf("Even number");
      }
      else {
            printf("Odd number");
      }
}

#include<stdio.h>
int display(int);
int main(){
      int x;
      scanf("%d",&x);
      int result = display(x);
      printf("%d",result);
      return 0;
}
int display (int n)
 {
 if(n == 0)
 return 0; // terminating condition
 else
 {
 printf("%d\n",n);
 return display(n-1); // recursive call
 }
 }
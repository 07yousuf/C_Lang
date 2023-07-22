//no argument/parameter with return
#include<stdio.h>
int cal();
int main(){
      int result= cal();
      printf("Result= %d",result);
      return 0;
}
int cal(){
      int a,b;
      scanf("%d \n%d",&a,&b);
      return a+b;
}
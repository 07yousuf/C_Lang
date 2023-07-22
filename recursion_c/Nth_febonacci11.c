#include<stdio.h>
int febonacci(int);
int sum=0,a=0,b=1;
int main(){
      int n;
      scanf("%d",&n);
      // printf("%d ",a);
      // printf("%d ",b);
      int ans=febonacci(n);
      printf("Nth febonacci value is %d\n",ans);


}
int febonacci(int x){
      if(x==1 || x==2){
            return 1;
      }
      for(int i=0; i<x; i++){
            sum= a+b;
            // printf("%d ",sum);
            a=b;
            b=sum;
      }
      int equ1=febonacci(x-1);
      int equ2=febonacci(x-2);

      return equ1 + equ2;  
      
}
// #include<stdio.h>
// int main(){
//       int n,sum=0,a=1,b=1;
//       scanf("%d",&n);
//       printf("%d\n",a);
//       printf("%d\n",b);
//       for(int i=0; i<=n; i++){

//             sum= a+b;
//             printf("%d\n",sum);
//             a=b;
//             b=sum;
//       }
// }
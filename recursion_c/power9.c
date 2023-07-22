#include<stdio.h>
int power(int,int);
int main(){
      int a,b;
      printf("Enter a base number: \n");
      scanf("%d",&a);
      printf("Enter a power number: \n");
      scanf("%d",&b);
      power(a,b);

      int ans=power(a,b);
      printf("%d",ans);

}
int power(int a,int b){
      if(b==0){
            return 1;
      }
       return a*power(a,b-1);
}
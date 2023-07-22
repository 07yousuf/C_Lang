#include<stdio.h>
int Nth_print(int,int);
int main(){
      int x=1,n;
      scanf("%d",&n);
      Nth_print(x,n);
      
      return 0;
}
int Nth_print(int s,int m){
      if(m<=0){
            return 0;
      }
      Nth_print(s,m-1);
                  /*in Increasing time- printf() 
                  just under the line of recursive call()*/
      printf("%d\n",m);
      return 0;

}



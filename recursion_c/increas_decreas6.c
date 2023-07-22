#include<stdio.h>
int increas_decreas();
int main(){
      int x=1,n;
      scanf("%d",&n);
      increas_decreas(x,n);
      return 0;
}
int increas_decreas(int s,int m){
      if(m<=0){
            return 0;
      }
      printf("%d\n",m);
      increas_decreas(s,m-1);
      printf("%d\n",m);
      return 0;
}
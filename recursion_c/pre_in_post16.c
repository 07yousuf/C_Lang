#include<stdio.h>
int PreInPost(int);
int main(){
      int n;
      scanf("%d",&n);
      PreInPost(n);
}
int PreInPost(int x){
      if(x==0) return 0;
      printf("Pre %d\n",x);
      PreInPost(x-1);
      printf("In %d\n",x);
      PreInPost(x-1);
      printf("Post %d\n",x);
      return 0;

}
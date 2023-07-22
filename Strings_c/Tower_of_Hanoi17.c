#include<stdio.h>
int tower_of_hanoi(int,char,char,char);
int main(){
      int n;
      scanf("%d",&n);
      tower_of_hanoi(n,'A','B','C');
      return 0;
}
int tower_of_hanoi(int n,char s,char h,char d){
      if(n==0){
            return 0;
      }
      tower_of_hanoi(n-1,s,d,h);
      printf("%c-->%c\n",s,d);
      tower_of_hanoi(n-1,h,s,d);
      return 0;
}
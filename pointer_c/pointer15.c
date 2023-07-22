#include<stdio.h>
int main(){
      int a=10,b=20,c=30,*p,*q,*r,*temp;
      p=&a;
      q=&b;
      r=&c;
      temp=p;
      p=q;
      q=r;
      r=temp;
      printf("%d\n",*p);
      printf("%d\n",*q);
      printf("%d",*r);
}
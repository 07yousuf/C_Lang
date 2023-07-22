//program to calculate the average of five numbers.
//no return with argument/parameter
#include<stdio.h>
void avgOfNum(int,int,int,int,int);
void main(){
      int n1,n2,n3,n4,n5;
      scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
      avgOfNum(n1,n2,n3,n4,n5);
}
void avgOfNum(int n1,int n2,int n3,int n4,int n5){
      int avg = (n1+n2+n3+n4+n5) / 5;
      printf("Average of five number= %d",avg);
}
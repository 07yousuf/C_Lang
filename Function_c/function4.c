//program to calculate the area of the square
//no argument/parameter with return
#include<stdio.h>
int square();
int main(){
      double AreaOfSquare = square();
      printf("Area of Square= %.3lf",AreaOfSquare);
}
int square(){
      double a;
      scanf("%lf",&a);
      return a*a;
}
//Void pointer example
#include<stdio.h>
int main()
{
      int a=5;
      double b=6.5;
      void *p;
      p=&a;
      printf("%d\n",*(int*)p);//pointer type casting 

      p=&b;
      printf("%.1lf",*(double*)p);//pointer type casting 

}
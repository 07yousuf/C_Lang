#include<stdio.h>
void hello();
int main()
{
      void(*p)();
      p=&hello;
      (*p)();  //function calling
}
void hello()
{
      printf("Hello function pointer...");
      return 0;
}

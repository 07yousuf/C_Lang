#include<stdio.h>
#include<math.h>
int main()
{
      int a,b;
      printf("Enter numbers: ");
      scanf("%d %d",&a,&b);

      printf("Power number is: ");
      int power= pow(a,b);
      printf("%d",power);
}
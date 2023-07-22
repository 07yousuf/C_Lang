#include <stdio.h>
void swap(int *iptr1, int *iptr2)
{
int temp;
temp = *iptr2;
*iptr2 = *iptr1;
*iptr1 = temp;
}
void main()
{
int x = 10;
int y = 20;
swap(&x,&y);
printf("Value of x is %d\n", x);
printf("Value of y is %d", y);
}
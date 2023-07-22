// C program to store temperature of two cities of a week and display it.
#include <stdio.h>

int main()
{
const int CITY = 2;
const int WEEK = 7;
int temperature[CITY][WEEK];
// Using nested loop to store values in a 2d array
for (int i = 1; i <= CITY; i++)
{
for (int j = 1; j <= WEEK; j++)
{
scanf("%d", &temperature[i][j]);
}
}
printf("\nDisplaying values: \n");
// Using nested loop to display vlues of a 2d array
for (int i = 1; i <= CITY; i++)
{
for (int j = 1; j <= WEEK; j++)
{

printf("%d ",temperature[i][j]);
}
printf("Second city temperature: \n");
}
return 0;
}
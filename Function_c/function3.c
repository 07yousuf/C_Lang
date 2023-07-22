//No Return With Argument Function in C
#include<stdio.h>
 
//Function Declaration
void add(int,int);
 
int main()
{
    int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    //Function Calling
    add(a,b);  // Actual Parameters
    return 0;
}
//Function Definition
void add(int x,int y)  //Formal Parameters
{
    int c;
    c=x+y;
    printf("\nTotal : %d",c);
}
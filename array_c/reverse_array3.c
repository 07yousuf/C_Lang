#include<stdio.h>
int main()
{
      int a[100],n;
      printf("How much elements you need in array- ");
      scanf("%d",&n);
      for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
      }
      for(int i=0; i<n; i++){
            printf(" %d ",a[i]);
      }
      printf("\nreverse elements are-\n");
      for(int i=n-1; i>=0; i--){
            printf(" %d ",a[i]);
      }

}
/*#include <stdio.h>

void main()
{
   int i,n,a[100];
   
       printf("\n\nRead n number of values in an array and display it in reverse order:\n");
       printf("------------------------------------------------------------------------\n");
   
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("% d",a[i]);
	 }
 
   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% d",a[i]);
	  }
   printf("\n\n");
}*/

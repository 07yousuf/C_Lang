#include<stdio.h>
int main()
{
      char str[100];
      printf("Enter a string: \n");
      scanf("%[^\n]s",str);

      int i=0,size=0;
      while(str[i]!='\0'){
            size++;
            i++;
      }
      printf("%d",size);
      for(int i=0,j=size-1; i<=j; i++,j--){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
      }
      printf("Reverse String:\n");
      puts(str);
      return 0;
}
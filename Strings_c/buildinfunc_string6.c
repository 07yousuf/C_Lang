#include<stdio.h>
#include<string.h>
int main()
{
      char str1[100]="hello yousuf";
      int x= strlen(str1);
      printf("str1 size: %d\n",x);

      char str2[100]="Hello rakiun";
      char str3[100];
      strcpy(str3,str2);
      printf("%s\n",str3);

      strcat(str1,str2);
      printf("%s",str1);

      

}
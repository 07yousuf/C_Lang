//Basic of String---

/*#include<stdio.h>
int main()
{
      char arr[]="Hello press\0";
      for(int i=0; arr[i]!='\0'; i++){
            printf("%c", arr[i]);
      }
      return 0;
}*/
/*#include<stdio.h>
int main()
{
      char arr[]="Hello press";
      puts(arr);
      return 0;
}*/
#include<stdio.h>
int main()
{
      char str1[100];
      //scanf("%s",str1); //only the first word will be considered
      gets(str1); // consoder entire sentence
      printf("your input was: %s\n",str1);
      puts(str1);
}

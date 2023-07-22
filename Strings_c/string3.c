// #include<stdio.h>
// int main()
// {
//       char str[]="Yousuf";
//       char *p;
//       p=str;
//       p="No Yousuf";
//       printf("%s",str);
// }
#include<stdio.h>
int main()
{
      char str[]="Yousuf";
      char *p;
      p=str;
      //p='E';
      str[0]='E';
      printf("%s",str);
}
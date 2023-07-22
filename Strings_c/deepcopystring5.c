/*#include<stdio.h>
int main()
{
      char str1[]="iya rafeu";
      printf("Original string: \n");
      puts(str1);
      int size=0,i=0;
      while(str1[i]!='\0'){
            size++;
            i++;
      }
      //Deep copy string part bellow:-
      char str2[size];
      for(int i=0; i<=size; i++){
            str2[i]=str1[i];
      }
      printf("Deep copy string: \n");
      puts(str2);
}*/
#include<stdio.h>
int main()
{
      char *str1="iya rafeu";

      
      //Deep copy string part bellow:-
      char *str2;
      str2=str1;
      printf("%s\n",str1);
      printf("%s",str2);

}
#include<stdio.h>
void TKtoDOLL();
int main()
{     
      int tk;
      scanf("%d",&tk);
      TKtoDOLL(tk);
      return 0;
}
void TKtoDOLL(int x)
{
      int dollar_convertion= x/105;
      printf("%d dollar",dollar_convertion);

}
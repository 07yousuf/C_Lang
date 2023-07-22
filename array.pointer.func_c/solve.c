#include<stdio.h>
int main()
{
      int s=0,c,p,i,z=16100,T=0;

      printf("profit and investment are:");
      scanf(" %d %d",&p,&i);
      for(int v=1; v<=5; v++){
            printf("Collection are: ");
            scanf("%d",&c);
            s=s+c;
      
      if(p<c){
            T=c-p;
      }
      else{
            T=p-c;
      }

      i-c;
      if(i==0){
            if(z==s){
                  printf("done");
            }
      }
      else{
            printf("error");
      }
}
}
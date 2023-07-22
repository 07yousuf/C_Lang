#include<stdio.h>
int main(){
      for(int i=1; i<=4; i++){
            for(int j=1; j<=5; j++){
                  printf("%d",j);
            }
            if(i==1){
                  i*1;
                  printf("\n");
            }
            else if(i==2){
                  i*2;
                  printf("\n");
            }
            else if(i==3){
                  i*3;
                  printf("\n");
            }
            else if(i==4){
                  i*4;
                  printf("\n");
            }
      }
}
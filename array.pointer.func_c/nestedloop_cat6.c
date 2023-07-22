#include<stdio.h>
int main(){
      for(int i=1; i<=6; i++){
            for(int j=1; j<=6; j++){
                  printf("*");
                  if(i==5){
                        printf("\n");
                        continue;
                  }
            }
      }
}
#include<stdio.h>
int maze_path();
int n,m;
int main(){
      printf("Enter the ending row: \n");
      scanf("%d",&n);
      printf("Enter the ending colunm: \n");
      scanf("%d",&m);
      int numberOfWays= maze_path(1,1,n,m);
      printf("So,Total ways are: %d",numberOfWays);
}
int maze_path(int cr,int cc,int lr,int lc){ //cr=current row; 'c' for colunm; 'r' for row; 'l' for last;

      if(cr==lr && cc==lc){
            return 1;
      }
      int rightWays=0;
      int downWays=0;
      if(cr==lr){
            rightWays += maze_path(cr,cc+1,n,m);
      }
      if(cc==lc){
            downWays += maze_path(cr+1,cc,n,m);
      }
      else if(cr<lr && cc<lc){
            rightWays += maze_path(cr,cc+1,n,m);
            downWays += maze_path(cr+1,cc,n,m);
      }
      int ans = rightWays + downWays;
      return ans;
}
#include<stdio.h>
int main(){
    int num,target,reverse=0,possible=0;
    scanf("%d %d",&num,&target);

    while(num!=0){
        int rem= num%10;
        reverse = reverse*10 +rem;
        num= num/10;
    }

    for(int i=1; i<=3; i++){
        int temp = reverse;
        int result =temp%10;
        temp= temp/10;

        while(temp!=0){
            int digit = temp%10;
            temp= temp/10;
            if(i==1){
                result=result+digit;
            }
            else if(i==2){
                result=result-digit;
            }
            else{
                result=result*digit;
            }
        }
        if(result==target){
            possible=1;
            break;
        }
    }
    printf(possible?"possible":"Impossible");
    return 0;
}
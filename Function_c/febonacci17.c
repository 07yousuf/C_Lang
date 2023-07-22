#include<stdio.h>
void febo(int);
int first=0,second=1,sum=0,sum2=0;
int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",first);
    printf("%d ",second);
    
    febo(n);
}
void febo(int n){
    for(int i=2; i<n; i++){
        sum = first + second;
        printf("%d ",sum);
        sum2 += sum;
        first = second;
        second = sum;
        
    }
    int sum3= sum2;
    printf("\n");
    printf("Summation of this febonacci series: %d",sum3);
}
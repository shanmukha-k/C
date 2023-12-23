#include <stdio.h>

int main(){
    int in,n;
    int sum=0;
    printf("Enter a 5-digit number: ");
    scanf("%d",&in);
    while(in>0){
        n=in%10;
        sum+=n;
        in/=10;
    }
    printf("Sumof the digits is: %d",sum);
    return 0;
}
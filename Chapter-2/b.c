#include <stdio.h>

int main(){
    int in,n;
    int out=0;
    printf("Enter a 5-digit number: ");
    scanf("%d",&in);
    int temp=in;
    while(in>0){
        n=in%10;
        out=(out*10)+n;
        in/=10;
    }
    printf("Reverse number of %d is: %d",temp,out);
    return 0;
}
#include <stdio.h>

int main(){
    int in,n;
    int out=0;
    printf("Enter a number: ");
    scanf("%d",&in);
    int temp=in;
    while(in>0){
        n=in%10;
        out=(out*10)+n;
        in/=10;
    }
    if(out==temp){
        printf("Both are equal\n");
    }
    else{
        printf("Both are not equal");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    printf("Enter the integer: ");
    scanf("%d",&n);
    if(n<0){
        printf("Absolute value of %d is: %d",n,n*-1);
    }
    else{
        printf("Absolute value of %d is: %d",n,n);
    }
    return 0;
}
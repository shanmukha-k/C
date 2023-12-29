#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the angle of A: ");
    scanf("%d",&a);
    printf("Enter the angle of B: ");
    scanf("%d",&b);
    printf("Enter the angle of c: ");
    scanf("%d",&c);
    if(a+b+c==180){
        printf("It is a valid triangle");
    }
    else{
        printf("It is not a valid triangle");
    }
    return 0;
}
#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        printf("It forms the triangle");
    }
    else{
        printf("It doen not form the triangle");
    }
    return 0;
}
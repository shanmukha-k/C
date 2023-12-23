#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("Enter the three sides of a traingle:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float s=(a+b+c)*(0.5);
    float area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
    if(area==0){
        printf("Traingle with the mentioned sides can not be formed\n");
        return -1;
    }
    printf("Area of the triangle is: %0.3f",area);
    return 0;
}
#include <stdio.h>

int main(){
    float fl;
    printf("Enter temperature in Fahrenheit degrees: ");
    scanf("%f",&fl);
    float Ce=((fl-32)*(5))/9;
    printf("Enter temperature in Centigrade degrees: %0.2f",Ce);
    return 0;  

}
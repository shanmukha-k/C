#include <stdio.h>

int main(){
    float km;
    printf("Enter the distance in Kilometers: ");
    scanf("%f",&km);
    float m=km*1000.0;
    float cm=m*100.0;
    float ft=m*3.28084;
    float inch=ft*12.0;
    printf("Distance in Meters: %0.3f\n",m);
    printf("Distance in Feets: %0.3f\n",ft);
    printf("Distance in Inches: %0.3f\n",inch);
    printf("Distance in Centimeters: %0.3f\n",cm);


}
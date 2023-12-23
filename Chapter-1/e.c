#include <stdio.h>

int main(){
    float l,b,r;
    printf("Enter Length of a Rectangle: \n");
    scanf("%f",&l);
    printf("Enter Breadth of a Rectangle: \n");
    scanf("%f",&b);
    printf("Enter Radius of a Circle: \n");
    scanf("%f",&r);
    float ar=l*b;
    float pr=2*(l+b);
    float ac=(3.1428)*(r*r);
    float cc=2*(3.1428)*(r);
    printf("Area of the Rectangle: %0.2f\n",ar);
    printf("Perimeter of the Rectangle: %0.2f\n",pr);
    printf("Area of the Circle: %0.2f\n",ac);
    printf("Circumference of the Circle: %0.2f\n",cc);
    return 0;
}
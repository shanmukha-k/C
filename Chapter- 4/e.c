#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        if(a==b&&b==c){
            printf("Equilateral Traingle");
        }
        else if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&a!=b)){
            printf("Isosceles Triangle");
        }
        else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a)){
            printf("Right Angled Triangle");
        }
        else{
            printf("None of the triangles");
        }
    }
    else{
        printf("It doen not form the triangle");
    }

    return 0;
}
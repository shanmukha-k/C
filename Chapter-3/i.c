#include <stdio.h>

int main(){
    float l,b;
    printf("Enter length and breadth of the rectangle: \n");
    scanf("%d%d",&l,&b);
    float area=l*b;
    float peri=2*(l+b);
    if(area>peri){
        printf("Area is greater then perimeter");
    }
    else if(area<peri){
        printf("Area is less then perimeter");
    }
    else{
        printf("Both area and perimeter are same");
    }
    return 0;
}
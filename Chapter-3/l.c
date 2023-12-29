#include <stdio.h>

int main(){
    float x,y;
    printf("Enter the cordinates of the point (X,Y): \n");
    scanf("%f%f",&x,&y);
    if(x==0){
        if(y!=0){
            printf("Point lies on Y-axis");
        }
        else{
            printf("Point is on origin");
        }
    }
    else{
        if(y==0){
            printf("Point lies on X-axis");
        }
        else{
            printf("Point doesn't lie on either of the axis");
        }
    }
    return 0;
}
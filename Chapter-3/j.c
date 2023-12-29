#include <stdio.h>
#include <math.h>

int main(){
    float x1,x2,x3,y1,y2,y3;
    printf("Enter the cordinates for first point A:\n");
    scanf("%f %f",&x1,&y1);
    printf("Enter the cordinates for second point B:\n");
    scanf("%f %f",&x2,&y2);
    printf("Enter the cordinates for third point c:\n");
    scanf("%f %f",&x3,&y3);
    float slope1=(y2-y1)/(x2-x1);
    float slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2){
        printf("All points are colinear");
    }
    else{
        printf("All points are not colinear");
    }
    return 0;
}
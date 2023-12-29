#include <stdio.h>
#include <math.h>

int main(){
    float x1,y1,r,x2,y2;
    printf("Enter both (X,Y) cordinates of the center of the circle: \n");
    scanf("%f %f",&x1,&y1);
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("Enter the (X,y) cordinates of the desired testing point: \n");
    scanf("%f %f",&x2,&y2);
    float dist=sqrt(pow((x2-x1),2)+pow((y2-y2),2));
    if(dist<r){
        printf("Point is inside the circle.");
    }
    else if(dist>r){
        printf("Point is outside the circle.");
    }
    else{
        printf("Point is on the circle.");
    }
    return 0;
}
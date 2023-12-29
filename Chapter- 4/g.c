#include <stdio.h>

float max(float a,float b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    float r,g,b;
    printf("Enter RGB values of the colour: ");
    scanf("%f%f%f",&r,&g,&b);
    float w,c,m,y,k,bl;
    if(r==0&&g==0&&b==0){
        printf("CMYK format of the colour is 0,0,0,1");
        return 0;

    }
    w=max(max(r/255,g/255),b/255);
    c=(w-(r/255))/w;
    m=(w-(g/255))/w;
    y=(w-(b/255))/w;
    bl=1-w;
    printf("CMYK format of the colour is %0.2f,%0.2f,%0.2f,%0.2f",c,m,y,k);
    return 0;   
}


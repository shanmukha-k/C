#include <stdio.h>

int main(){

    float h,c,t;
    printf("Enter the values for Hardness, Carbon Content and Tensile Strength: ");
    int sum=0;
    scanf("%f %f %f",&h,&c,&t);
    if(h>50){
        sum+=1;
    }
    if(c<0.7){
        sum+=2;
    }
    if(t>5600){
        sum+=3;
    }
    switch(sum){
        case 6:
            printf("Grade 10");
            break;
        case 3:
            printf("Grade 9");
            break;
        case 5:
            printf("Grade 8");
            break;
        case 4:
            printf("Grade 7");
            break;
        case (1||2||3):
            printf("Grade 6");
            break;
        case 0:
            printf("Grade 5");
            break;
    }
    return 0;
}
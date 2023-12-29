#include <stdio.h>

int main(){
    
    float w;
    printf("Enter the weight: ");
    scanf("%f",&w);
    if(w<155){
        printf("Flyweight");
    }
    else if(w>=115&&w<=121){
        printf("Bantamweight");
    }
    else if(w>=122&&w<=153){
        printf("Featherweight");
    }
    else if(w>=154&&w<=189){
        printf("MiddleWeight");
    }
    else{
        printf("Heavyweight");
    }
    return 0;
}
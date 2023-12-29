#include <stdio.h>

int main(){
    float c,s;
    printf("Enter the Cost price: ");
    scanf("%f",&c);
    printf("Enter the Selling price: ");
    scanf("%f",&s);
    float profit=s-c;
    if(profit>0){
        printf("He got profit\n");
        printf("And the profit he got is: %0.2f\n",profit);
    }
    else if(profit<0){
        printf("He got loss\n");
        printf("And the loss he got is: %0.2f\n",profit);
    }
    else{
        printf("He didn't got any profit/loss");
    }
    return 0;

}
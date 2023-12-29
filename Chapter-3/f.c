#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the age of Ram: ");
    scanf("%d",&a);
    printf("Enter the age of Shyam: ");
    scanf("%d",&b);
    printf("Enter the age of Ajay: ");
    scanf("%d",&c);
    if(a<b){
        if(a<c){
            printf("Ram is the youngest");
        }
        else{
            printf("Ajay is the youngest");
        }
    }
    else{
        if(b<c){
            printf("Shyam is the youngest");
        }
        else{
            printf("Ajay is the youngest");
        }
    }
    return 0;
}
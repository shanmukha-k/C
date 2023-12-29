#include <stdio.h>

int main(){
    char in;
    printf("Enter the character: ");
    scanf("%c",&in);
    if((in>=65)&&(in<=90)){
        printf("Capital letter");
    }
    else if((in>=97)&&(in<=122)){
        printf("Small case letter");
    }
    else if((in>=48)&&(in<=57)){
        printf("A Digit");
    }
    else if(((in>=0)&&(in<=47))||((in>=58)&&(in<=64))||((in>=91)&&(in<=96))||((in>=123)&&(in<=127))){
        printf("Special Symbol");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int l=1189;
    int b=841;
    printf("A(0) : %d mm x %d mm\n",l,b);
    for(int i=1;i<=8;i++){
        int temp=l;
        l=b;
        b=temp/2;
        printf("A(%d) : %d mm x %d mm\n",i,l,b);
    }
    return 0;
}
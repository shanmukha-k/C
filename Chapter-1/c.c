#include <stdio.h>

int main(){
    float total=0.0;
    float mark;
    printf("Enter each marks in 5 subjects: \n");
    for(int i=1;i<=5;i++){
        scanf("%f",&mark);
        total+=mark;
    }
    printf("Total Marks: %0.2f\n",total);
    float perc=(total/5);
    printf("Percentage of toal marks: %0.2f",perc);

    return 0;
}
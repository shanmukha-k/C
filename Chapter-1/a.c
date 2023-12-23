#include <stdio.h>

int main(){
    int salary;
    printf("Enter the Base Salary: ");
    scanf("%d",&salary);
    salary+=(salary*60)/100;
    printf("Gross Salary: %d",salary);
    return 0;
}
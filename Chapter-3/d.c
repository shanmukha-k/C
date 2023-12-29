#include <stdio.h>

int dayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;

    int h = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    // h is the day of the week (0 = Saturday, 1 = Sunday, ..., 6 = Friday)
    return h;
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Assuming January 1st for the input year
    int day = dayOfWeek(year, 1, 1);

    // Printing the day of the week
    switch (day) {
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}

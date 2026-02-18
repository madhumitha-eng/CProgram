#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number!\n");
        return 0;
    }

    if (month == 2) {
        printf("Enter year: ");
        scanf("%d", &year);

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("February has 29 days (Leap Year).\n");
        else
            printf("February has 28 days.\n");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Month has 30 days.\n");
    }
    else {
        printf("Month has 31 days.\n");
    }

    return 0;
}

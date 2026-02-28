#include <stdio.h>

int main() {
    int days;
    char type;
    float fine;

    printf("Enter book type (R=Regular, F=Reference): ");
    scanf(" %c", &type);

    printf("Enter overdue days: ");
    scanf("%d", &days);

    if (type == 'R')
        fine = days * 70;
    else
        fine = days * 150;

    if (days > 77)
        fine += 100;

    printf("Fine = %.2f\n", fine);

    return 0;
}

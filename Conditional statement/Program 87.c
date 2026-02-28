#include <stdio.h>
#include <math.h>

int main() {
    float basic, total, hra, da, pf;
    char grade;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter grade (A/B/C): ");
    scanf(" %c", &grade);

    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;

    if (grade == 'A')
        total = basic + hra + da + 1700 - pf;
    else if (grade == 'B')
        total = basic + hra + da + 1500 - pf;
    else
        total = basic + hra + da + 1300 - pf;

    printf("Total Salary = %.0f\n", round(total));

    return 0;
}

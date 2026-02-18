#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if (basic <= 70000) {
        hra = basic * 0.30;
        da  = basic * 0.80;
    } else {
        hra = basic * 0.40;
        da  = basic * 0.90;
    }

    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA  = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}

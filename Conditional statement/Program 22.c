#include <stdio.h>

int main() {
    float salary, bonus = 0, finalSalary;
    char gender;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    if (gender == 'M' || gender == 'm')
        bonus = salary * 0.10;
    else if (gender == 'F' || gender == 'f')
        bonus = salary * 0.15;
    else {
        printf("Invalid gender!\n");
        return 0;
    }

    finalSalary = salary + bonus;

    printf("Bonus = %.2f\n", bonus);
    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}

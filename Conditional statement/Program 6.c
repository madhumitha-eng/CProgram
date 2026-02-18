#include <stdio.h>

int main() {
    int hours;
    char gender;
    float salary = 0;
    printf("Enter number of hours worked in a week: ");
    scanf("%d", &hours);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);   
    if (hours <= 8) {
        if (gender == 'M' || gender == 'm') {
            salary = hours * 80;
        }
        else if (gender == 'F' || gender == 'f') {
            salary = hours * 60;
        }
        else {
            printf("Invalid gender entered!\n");
            return 0;
        }
    }
    else {
        int extra_hours = hours - 8;

        if (gender == 'M' || gender == 'm') {
            salary = (8 * 80) + (extra_hours * 100);
        }
        else if (gender == 'F' || gender == 'f') {
            salary = (8 * 60) + (extra_hours * 100);
        }
        else {
            printf("Invalid gender entered!\n");
            return 0;
        }
    }

    // Output
    printf("Total Weekly Salary = Rs. %.2f\n", salary);

    return 0;
}

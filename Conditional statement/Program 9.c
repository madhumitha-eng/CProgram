#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid input! Please enter a valid age.\n");
        return 0;
    }

    if (age <= 5) {
        printf("Recommended food: Mashed vegetables or soft fruits.\n");
    }
    else if (age >= 6 && age <= 12) {
        printf("Recommended food: Rice, vegetables, and milk.\n");
    }
    else if (age >= 13 && age <= 18) {
        printf("Recommended food: Burgers or pasta.\n");
    }
    else if (age >= 19 && age <= 50) {
        printf("Recommended food: Balanced diet with proteins and vegetables.\n");
    }
    else {
        printf("Recommended food: Soup or grilled fish.\n");
    }

    return 0;
}

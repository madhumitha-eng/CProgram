#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age\n");
    } else if (age < 13) {
        printf("Child\n");
    } else if (age < 18) {
        printf("Teenager\nNot eligible to vote\n");
    } else if (age < 60) {
        printf("Adult\nEligible to vote\n");
    } else {
        printf("Senior\nEligible to vote\n");
    }

    return 0;
}

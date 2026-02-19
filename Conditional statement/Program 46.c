#include <stdio.h>

int main() {
    int rating;
    float salary, increment = 0;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Performance Rating (1-5): ");
    scanf("%d", &rating);

    switch(rating) {
        case 5: increment = salary * 0.20; break;
        case 4: increment = salary * 0.15; break;
        case 3: increment = salary * 0.10; break;
        case 2: increment = salary * 0.05; break;
        case 1: increment = salary * 0.02; break;
        default: printf("Invalid Rating\n");
    }

    printf("Annual Increment: %.2f\n", increment);

    return 0;
}

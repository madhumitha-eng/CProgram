#include <stdio.h>

int main() {
    int charge;

    printf("Enter charge level (0-100): ");
    scanf("%d", &charge);

    if (charge < 0 || charge > 100) {
        printf("Invalid input\n");
    } else if (charge <= 25) {
        printf("Low\n");
    } else if (charge <= 50) {
        printf("Medium\n");
    } else if (charge <= 75) {
        printf("Almost Full\n");
    } else {
        printf("Full\n");
    }

    return 0;
}

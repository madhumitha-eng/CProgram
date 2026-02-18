#include <stdio.h>

int main() {
    int symptoms;

    printf("Enter number of symptoms: ");
    scanf("%d", &symptoms);

    if (symptoms < 0) {
        printf("Invalid input! Please enter a valid number.\n");
    }
    else if (symptoms >= 5) {
        printf("Condition: Critical\nPriority Level: High\n");
    }
    else if (symptoms >= 3) {
        printf("Condition: Moderate\nPriority Level: Medium\n");
    }
    else {
        printf("Condition: Stable\nPriority Level: Low\n");
    }

    return 0;
}

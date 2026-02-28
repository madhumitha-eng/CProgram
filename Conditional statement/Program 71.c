#include <stdio.h>

int main() {
    int seat;

    printf("Enter seat number (1-100): ");
    scanf("%d", &seat);

    if (seat >= 1 && seat <= 30)
        printf("Available\n");
    else if (seat >= 31 && seat <= 60)
        printf("Reserved\n");
    else if (seat >= 61 && seat <= 100)
        printf("Occupied\n");
    else
        printf("Invalid seat number\n");

    return 0;
}

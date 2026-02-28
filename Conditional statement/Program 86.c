#include <stdio.h>

int main() {
    int seat;

    printf("Enter seat number: ");
    scanf("%d", &seat);

    if (seat % 2 == 0)
        printf("Even Seat\n");
    else
        printf("Odd Seat\n");

    if (seat % 4 == 0)
        printf("Back Section\n");
    else if (seat % 3 == 0)
        printf("Back Section\n");
    else
        printf("Front Section\n");

    return 0;
}

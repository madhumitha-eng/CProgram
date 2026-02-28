#include <stdio.h>

int main() {
    float distance;

    printf("Enter distance: ");
    scanf("%f", &distance);

    if (distance > 1000) {
        printf("Distance in km = %.2f\n", distance / 1000);
    } else {
        printf("Distance in metres = %.2f\n", distance);
    }

    return 0;
}

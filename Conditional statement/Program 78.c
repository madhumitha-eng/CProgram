#include <stdio.h>

int main() {
    float value;
    char unit;

    printf("Enter value and unit (k/m): ");
    scanf("%f %c", &value, &unit);

    if (unit == 'k') {
        printf("In metres = %.2f\n", value * 1000);
    } else if (unit == 'm') {
        printf("In kilometres = %.2f\n", value / 1000);
    } else {
        printf("Invalid unit\n");
    }

    return 0;
}

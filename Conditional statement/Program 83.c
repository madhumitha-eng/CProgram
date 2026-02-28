#include <stdio.h>

int main() {
    int power;

    printf("Enter eye power: ");
    scanf("%d", &power);

    if (power == 0)
        printf("Normal\n");
    else if (power < 0) {
        printf("Short Sighted - ");
        if (power >= -4) printf("Minimum\n");
        else if (power >= -8) printf("Moderate\n");
        else if (power >= -12) printf("High\n");
        else if (power >= -16) printf("Chronic\n");
        else printf("Invalid\n");
    }
    else {
        printf("Long Sighted - ");
        if (power <= 4) printf("Minimum\n");
        else if (power <= 8) printf("Moderate\n");
        else if (power <= 12) printf("High\n");
        else if (power <= 16) printf("Chronic\n");
        else printf("Invalid\n");
    }

    return 0;
}

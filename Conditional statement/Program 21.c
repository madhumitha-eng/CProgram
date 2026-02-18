#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp <= 0)
        printf("Weather: Freezing\n");
    else if (temp <= 10)
        printf("Weather: Very Cold\n");
    else if (temp <= 20)
        printf("Weather: Cold\n");
    else if (temp <= 30)
        printf("Weather: Normal\n");
    else if (temp <= 40)
        printf("Weather: Hot\n");
    else
        printf("Weather: Very Hot\n");

    return 0;
}

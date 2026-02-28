#include <stdio.h>

int main() {
    float temp;
    char choice;

    printf("Convert (C/F): ");
    scanf(" %c", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (choice == 'C')
        printf("Fahrenheit = %.2f\n", (temp * 9/5) + 32);
    else if (choice == 'F')
        printf("Celsius = %.2f\n", (temp - 32) * 5/9);
    else
        printf("Invalid Choice\n");

    return 0;
}

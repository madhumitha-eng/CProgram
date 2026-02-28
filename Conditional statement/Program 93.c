#include <stdio.h>

int main() {
    float weight;

    printf("Enter package weight (kg): ");
    scanf("%f", &weight);

    if (weight <= 5)
        printf("Small Package - Cost: 50\n");
    else if (weight <= 20)
        printf("Medium Package - Cost: 100\n");
    else
        printf("Large Package - Cost: 200\n");

    return 0;
}

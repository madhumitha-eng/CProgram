#include <stdio.h>

int main() {
    float price;
    int qty;
    char middle;
    float total, final;

    printf("Enter price per unit: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    printf("Enter middleman (A/B/C): ");
    scanf(" %c", &middle);

    total = price * qty;

    if(middle=='A') final = total * 0.9;
    else if(middle=='B') final = total * 0.85;
    else if(middle=='C') final = total * 0.8;
    else final = total;

    printf("Original Amount = %.2f\n", total);
    printf("After Deduction = %.2f", final);

    return 0;
}

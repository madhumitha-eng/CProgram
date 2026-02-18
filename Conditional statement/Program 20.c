#include <stdio.h>

int main() {
    float investment, purchasePrice, currentPrice, shares;
    float cost, currentValue, result;

    printf("Enter number of shares: ");
    scanf("%f", &shares);

    printf("Enter purchase price per share: ");
    scanf("%f", &purchasePrice);

    printf("Enter current price per share: ");
    scanf("%f", &currentPrice);

    cost = shares * purchasePrice;
    currentValue = shares * currentPrice;
    result = currentValue - cost;

    if (result > 0)
        printf("Profit = %.2f\n", result);
    else if (result < 0)
        printf("Loss = %.2f\n", -result);
    else
        printf("No Profit No Loss\n");

    return 0;
}

#include <stdio.h>

int main() {
    int amount, discount = 0;

    printf("Enter total amount: ");
    scanf("%d", &amount);

    if (amount < 1 || amount > 10000) {
        printf("Invalid Amount\n");
        return 0;
    }

    if (amount <= 100)
        discount = 0;
    else if (amount <= 1000)
        discount = 25;
    else if (amount <= 5000)
        discount = 100;
    else
        discount = 500;

    printf("Final Amount = %d\n", amount - discount);

    return 0;
}

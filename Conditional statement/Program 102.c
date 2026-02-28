#include <stdio.h>

int main() {
    int amount;
    char type;

    printf("Enter account type (R/P): ");
    scanf(" %c", &type);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (type == 'R' && amount > 300)
        printf("Limit Exceeded\n");
    else if (type == 'P' && amount > 500)
        printf("Limit Exceeded\n");
    else
        printf("Withdrawal Successful\n");

    return 0;
}

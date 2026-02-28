#include <stdio.h>

int main() {
    int n, digit, evenSum = 0, oddSum = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    for (int i = 0; i < 4; i++) {
        digit = n % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        n = n / 10;
    }

    printf("Even digit sum = %d\n", evenSum);
    printf("Odd digit sum = %d\n", oddSum);

    return 0;
}

#include <stdio.h>

int main() {
    int A;

    printf("Enter number (1-1000): ");
    scanf("%d", &A);

    if (A < 1 || A > 1000) {
        printf("Invalid Input\n");
        return 0;
    }

    if (A % 2 == 0 && A % 7 == 0)
        printf("Alice\n");
    else if (A % 2 != 0 && A % 9 == 0)
        printf("Bob\n");
    else
        printf("Charlie\n");

    return 0;
}

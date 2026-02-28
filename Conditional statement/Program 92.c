#include <stdio.h>

int main() {
    char c1, c2;

    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);

    printf("Sum of ASCII values = %d\n", c1 + c2);

    return 0;
}

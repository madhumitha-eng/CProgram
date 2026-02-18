#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o", num);

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } 
    else {
        printf("Both numbers are not equal.\n");
    }

    return 0;
}

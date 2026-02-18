#include <stdio.h>

int main() {
    int num, divisor;

    printf("Enter number and divisor: ");
    scanf("%d%d",&num,&divisor);

    if(divisor == 0)
        printf("Error: Division by zero");
    else if(num % divisor == 0)
        printf("Divisible");
    else
        printf("Not Divisible");

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 7 == 0 || num % 10 == 7)
        printf("Buzz Number");
    else
        printf("Not a Buzz Number");

    return 0;
}

#include <stdio.h>

int main() {
    int x, y, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    sum = x + y;

    if (sum % 2 == 0)
        printf("Sum is Even\n");
    else
        printf("Sum is Odd\n");

    if (x > 0 && y > 0)
        printf("Both are Positive\n");
    else if (x < 0 && y < 0)
        printf("Both are Negative\n");
    else if (x == 0 || y == 0)
        printf("One of the numbers is Zero\n");
    else
        printf("One Positive and One Negative\n");

    return 0;
}

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != b && b != c && a != c)
        printf("Scalene Triangle\n");
    else
        printf("Not Scalene\n");

    return 0;
}

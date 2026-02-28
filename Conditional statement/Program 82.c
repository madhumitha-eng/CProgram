#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    smallest = a;

    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}

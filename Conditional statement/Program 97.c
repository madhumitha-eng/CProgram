#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age <= 12)
        printf("Child Ticket (Discount Applied)\n");
    else
        printf("Regular Ticket\n");

    return 0;
}

#include <stdio.h>

int main() {
    float age;

    printf("Enter Lion's Age: ");
    scanf("%f", &age);

    if (age < 0 || age > 26)
        printf("Invalid Age\n");
    else if (age <= 2)
        printf("Cub\n");
    else if (age <= 4)
        printf("Juvenile\n");
    else if (age <= 7)
        printf("Subadult\n");
    else if (age <= 12)
        printf("Young Adult\n");
    else
        printf("Old Adult\n");

    return 0;
}

#include <stdio.h>

int main() {
    int age;
    char gender;
    float height;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter height in metres: ");
    scanf("%f", &height);

    if (height >= 1.80 || (gender == 'M' && age >= 18)) {
        printf("Selected for the team\n");
    } else {
        printf("Not selected\n");
    }

    return 0;
}

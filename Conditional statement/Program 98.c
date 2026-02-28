#include <stdio.h>

int main() {
    int choice;
    float area;

    printf("1.Circle\n2.Rectangle\n3.Triangle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        float r;
        printf("Enter radius: ");
        scanf("%f", &r);
        area = 3.14 * r * r;
    }
    else if (choice == 2) {
        float l, b;
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
    }
    else if (choice == 3) {
        float b, h;
        printf("Enter base and height: ");
        scanf("%f %f", &b, &h);
        area = 0.5 * b * h;
    }
    else {
        printf("Invalid Choice\n");
        return 0;
    }

    printf("Area = %.2f\n", area);
    return 0;
}

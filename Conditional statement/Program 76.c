#include <stdio.h>

int main() {
    int choice;
    float mass, velocity, height, energy;

    printf("1. Kinetic Energy\n2. Potential Energy\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter mass and velocity: ");
        scanf("%f %f", &mass, &velocity);
        energy = 0.5 * mass * velocity * velocity;
        printf("Kinetic Energy = %.2f\n", energy);
    } 
    else if (choice == 2) {
        printf("Enter mass and height: ");
        scanf("%f %f", &mass, &height);
        energy = mass * 9.8 * height;
        printf("Potential Energy = %.2f\n", energy);
    } 
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

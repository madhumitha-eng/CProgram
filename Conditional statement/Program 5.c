#include <stdio.h>
int main() {
    int steps, time;
    printf("Enter number of steps taken in a day: ");
    scanf("%d", &steps);
    printf("Enter time taken (in minutes): ");
    scanf("%d", &time);
    if (steps >= 10000 && time <= 60) {
        printf("Fitness Level: Excellent\n");
    }
    else if (steps >= 8000 && time <= 90) {
        printf("Fitness Level: Good\n");
    }
    else if (steps >= 5000 && time <= 120) {
        printf("Fitness Level: Average\n");
    }
    else {
        printf("Fitness Level: Poor\n");
    }

    return 0;
}

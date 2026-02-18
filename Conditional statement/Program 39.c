#include <stdio.h>

int main() {
    float limit, speed;

    printf("Enter speed limit: ");
    scanf("%f",&limit);

    printf("Enter vehicle speed: ");
    scanf("%f",&speed);

    if(speed > limit)
        printf("Warning: Speed limit exceeded!");
    else
        printf("Within speed limit.");

    return 0;
}

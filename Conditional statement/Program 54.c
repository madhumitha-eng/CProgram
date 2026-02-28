#include <stdio.h>
#include <math.h>

int main() {
    float angle, x, y, newX, newY;
    int dir;

    printf("Enter angle: ");
    scanf("%f", &angle);
    printf("Direction (1=CCW, -1=CW): ");
    scanf("%d", &dir);
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    angle = angle * M_PI / 180;
    angle *= dir;

    newX = x*cos(angle) - y*sin(angle);
    newY = x*sin(angle) + y*cos(angle);

    printf("New Coordinates: %.2f %.2f", newX, newY);

    return 0;
}

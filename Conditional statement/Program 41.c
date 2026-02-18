#include <stdio.h>

int main() {
    float miles, gallons, mpg;

    printf("Enter miles driven: ");
    scanf("%f",&miles);

    printf("Enter gallons used: ");
    scanf("%f",&gallons);

    mpg = miles / gallons;

    printf("MPG = %.2f\n", mpg);

    if(mpg < 20)
        printf("Poor");
    else if(mpg < 30)
        printf("Average");
    else if(mpg < 40)
        printf("Good");
    else
        printf("Excellent");

    return 0;
}

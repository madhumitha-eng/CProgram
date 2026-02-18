#include <stdio.h>

int main() {
    float height;

    printf("Enter height in cm: ");
    scanf("%f",&height);

    if(height < 150)
        printf("Short");
    else if(height < 165)
        printf("Average Height");
    else if(height < 180)
        printf("Tall");
    else
        printf("Very Tall");

    return 0;
}

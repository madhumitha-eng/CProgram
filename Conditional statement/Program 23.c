#include <stdio.h>

int main() {
    float temp;

    printf("Enter Body Temperature in Celsius: ");
    scanf("%f", &temp);

    if(temp >= 37)
        printf("The individual has a fever.");
    else
        printf("The individual does not have a fever.");

    return 0;
}

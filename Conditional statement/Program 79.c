#include <stdio.h>

int main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 0)
        printf("Very Cold\n");
    else if (temp < 15)
        printf("Cold\n");
    else if (temp < 30)
        printf("Normal\n");
    else if (temp < 40)
        printf("Hot\n");
    else
        printf("Very Hot\n");

    return 0;
}

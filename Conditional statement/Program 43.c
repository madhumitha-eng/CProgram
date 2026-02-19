#include <stdio.h>

int main() {
    float temperature, oilPressure;
    int rpm;

    printf("Enter Temperature (°C): ");
    scanf("%f", &temperature);

    printf("Enter Oil Pressure (PSI): ");
    scanf("%f", &oilPressure);

    printf("Enter RPM: ");
    scanf("%d", &rpm);

    if (temperature > 75 || oilPressure < 12 || rpm > 7000) {
        printf("Engine Health: POOR\n");
    }
    else if (temperature > 50 || oilPressure < 12 || rpm > 4000) {
        printf("Engine Health: FAIR\n");
    }
    else {
        printf("Engine Health: GOOD\n");
    }

    return 0;
}

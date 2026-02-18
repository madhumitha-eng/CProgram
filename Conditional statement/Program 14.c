#include <stdio.h>

int main() {
    int total, perDay, plannedDays;
    int required;

    printf("Enter total chocolates: ");
    scanf("%d", &total);

    printf("Enter chocolates consumed per day: ");
    scanf("%d", &perDay);

    printf("Enter planned days: ");
    scanf("%d", &plannedDays);

    required = perDay * plannedDays;

    if (total >= required)
        printf("Output: 1 (Chocolates will last)\n");
    else
        printf("Output: 0 (Chocolates will run out)\n");

    return 0;
}

#include <stdio.h>

int main() {
    int startTime;

    printf("Enter start time (24-hour format): ");
    scanf("%d", &startTime);

    if (startTime <= 18)
        printf("Can complete all assignments on time\n");
    else
        printf("Cannot complete on time\n");

    return 0;
}

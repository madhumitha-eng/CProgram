#include <stdio.h>

int main() {
    int d, m, y;

    printf("Enter day month year: ");
    scanf("%d %d %d", &d, &m, &y);

    if (m < 1 || m > 12 || d < 1 || d > 31) {
        printf("Invalid Date\n");
        return 0;
    }

    d++;

    if (d > 30) {
        d = 1;
        m++;
    }
    if (m > 12) {
        m = 1;
        y++;
    }

    printf("Next Date: %d/%d/%d\n", d, m, y);

    return 0;
}

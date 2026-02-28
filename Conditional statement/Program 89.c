#include <stdio.h>

int main() {
    int chef, chefina, sum;

    printf("Enter dice values (1-6): ");
    scanf("%d %d", &chef, &chefina);

    if (chef < 1 || chef > 6 || chefina < 1 || chefina > 6) {
        printf("Invalid Input\n");
        return 0;
    }

    sum = chef + chefina;

    if (sum > 6)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

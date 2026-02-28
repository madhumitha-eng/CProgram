#include <stdio.h>

int main() {
    int n;

    printf("Enter single digit number: ");
    scanf("%d", &n);

    int nn = n*10 + n;
    int nnn = n*100 + n*10 + n;

    printf("Total Points = %d\n", n + nn + nnn);

    return 0;
}

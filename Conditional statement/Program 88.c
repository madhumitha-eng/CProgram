#include <stdio.h>

int main() {
    int a[5], count[5] = {0}, max = 0;

    printf("Enter five numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 5; i++) {
        int c = 0;
        for (int j = 0; j < 5; j++)
            if (a[i] == a[j]) c++;
        if (c > max) max = c;
    }

    printf("Minimum changes needed = %d\n", 5 - max);

    return 0;
}

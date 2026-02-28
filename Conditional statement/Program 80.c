#include <stdio.h>

int main() {
    int size;

    printf("Enter dress size: ");
    scanf("%d", &size);

    if (size <= 30)
        printf("Small Size\n");
    else if (size <= 36)
        printf("Medium Size\n");
    else if (size <= 42)
        printf("Large Size\n");
    else
        printf("Extra Large Size\n");

    return 0;
}

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter x y z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x==0 && y==0 && z==0)
        printf("origin\n");
    else if (x==0 && y==0)
        printf("z-axis\n");
    else if (x==0 && z==0)
        printf("y-axis\n");
    else if (y==0 && z==0)
        printf("x-axis\n");
    else if (x==0)
        printf("yz-plane\n");
    else
        printf("General point in space\n");

    return 0;
}

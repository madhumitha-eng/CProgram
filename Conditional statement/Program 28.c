#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter positive integer: ");
    scanf("%d", &num);

    int root = sqrt(num);

    if(root * root == num)
        printf("Perfect Square");
    else
        printf("Not Perfect Square");

    return 0;
}

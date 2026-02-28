#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num>=10000 && num<=99999)
        printf("5 digit number");
    else
        printf("Not 5 digit");

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a digit (0-9): ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers not allowed\n");
    } else {
        switch(num) {
            case 0: printf("zero"); break;
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
            default: printf("Invalid digit");
        }
    }

    return 0;
}

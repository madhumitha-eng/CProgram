#include <stdio.h>

int main() {
    int choice;

    printf("Chocolate Menu:\n");
    printf("1. Milk Chocolate\n");
    printf("2. Dark Chocolate\n");
    printf("3. White Chocolate\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected Milk Chocolate.\n");
            printf("It has a creamy taste. Enjoy your chocolate!\n");
            break;
        case 2:
            printf("You selected Dark Chocolate.\n");
            printf("It has a rich flavour. Enjoy your chocolate!\n");
            break;
        case 3:
            printf("You selected White Chocolate.\n");
            printf("It is sweet and smooth. Enjoy your chocolate!\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 3.\n");
    }

    return 0;
}

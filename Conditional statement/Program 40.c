#include <stdio.h>

int main() {
    int qty;
    float price, total, discount=0;

    printf("Enter quantity and price per item: ");
    scanf("%d%f",&qty,&price);

    total = qty * price;

    if(total > 5000)
        discount = total * 0.20;
    else if(total > 2000)
        discount = total * 0.10;

    printf("Final Amount = %.2f", total - discount);

    return 0;
}

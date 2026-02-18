#include <stdio.h>

int main() {
    float rate1, rate2, rate3;

    printf("Enter success rate of Agent1: ");
    scanf("%f", &rate1);
    printf("Enter success rate of Agent2: ");
    scanf("%f", &rate2);
    printf("Enter success rate of Agent3: ");
    scanf("%f", &rate3);

    if(rate1 > rate2 && rate1 > rate3)
        printf("Agent1 has highest priority");
    else if(rate2 > rate3)
        printf("Agent2 has highest priority");
    else
        printf("Agent3 has highest priority");

    return 0;
}

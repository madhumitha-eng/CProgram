#include <stdio.h>

int main() {
    int f;
    scanf("%d",&f);

    if(f<20)
        printf("Infrasound");
    else if(f<=20000)
        printf("Audible Sound");
    else
        printf("Ultrasound");

    return 0;
}

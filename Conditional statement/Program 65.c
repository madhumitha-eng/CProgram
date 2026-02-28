#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    if(fabs(c*c - (a*a+b*b))<0.01)
        printf("Right Triangle");
    else
        printf("Not Right Triangle");

    return 0;
}

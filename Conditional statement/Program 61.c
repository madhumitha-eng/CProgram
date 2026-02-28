#include <stdio.h>
#include <math.h>

int main() {
    int h,m;
    float angle;

    scanf("%d %d",&h,&m);

    angle=fabs((30*h + 0.5*m) - (6*m));
    if(angle>360) angle=fmod(angle,360);

    printf("Angle=%.2f",angle);
    return 0;
}

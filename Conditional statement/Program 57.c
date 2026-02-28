#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float r,h,a,sa,v;

    printf("1.Sphere 2.Cube 3.Cylinder\n");
    scanf("%d",&choice);

    if(choice==1){
        scanf("%f",&r);
        sa=4*M_PI*r*r;
        v=(4.0/3)*M_PI*r*r*r;
    }
    else if(choice==2){
        scanf("%f",&a);
        sa=6*a*a;
        v=a*a*a;
    }
    else if(choice==3){
        scanf("%f %f",&r,&h);
        sa=2*M_PI*r*(r+h);
        v=M_PI*r*r*h;
    }

    printf("Surface Area=%.2f\nVolume=%.2f",sa,v);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int ch;
    float r,h,l,b,vol;

    printf("1.Cone 2.Pyramid 3.Prism\n");
    scanf("%d",&ch);

    if(ch==1){
        scanf("%f %f",&r,&h);
        vol=(1.0/3)*M_PI*r*r*h;
    }
    else if(ch==2){
        scanf("%f %f %f",&l,&b,&h);
        vol=(1.0/3)*l*b*h;
    }
    else if(ch==3){
        scanf("%f %f %f",&l,&b,&h);
        vol=l*b*h;
    }

    printf("Volume=%.2f",vol);
    return 0;
}

#include <stdio.h>
void main() 
{
int m1, m2, m3, m4, m5, ;
scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5, ) ;
float percentage;
percentage=((m1+m2+m3+m4+m5) /600) *100) ;
if(percentage>=90) {
printf("A") ;
}
else if(percentage<=89&&percentage>=80) {
printf("B") ;
}
else if(percentage<=79&&percentage>=70) {
printf("C") ;
}
else if(percentage<=69&&percentage>=60) {
printf("D") ;
}
else if(percentage<=59&&percentage>=50) {
printf("E") ;
}
else  {
printf("F") ;
}
}

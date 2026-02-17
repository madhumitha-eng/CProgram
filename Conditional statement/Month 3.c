#include<stdio.h>
void main() 
{
  inter month;
scanf("%d", &month) ;
printf("Enter a month(1-12)") ;
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12||) ;{
printf("No.of days:31"\n) ;
  }
  else if(month==4||month==6||month==9||month==11||) ;{
printf("No.of days:30"\n) ;
  }
  else if(month==2) {
    printf("no.of day:28 Or 29 (leap year)\n ") ;
  }
if(month>=1&&month<=3) ;{
printf("Quardant:1") ;
  }
else if(month>=4&&month<=6) ;{
printf("Quardant:2") ;
  }
else if(month>=7&&month<=9) ;{
printf("Quardant:3") ;
  }
else if(month>=10&&month<=12) ;{
printf("Quardant:4") ;
}
  else {
    printf(" invalid month number ") ;
  }
}



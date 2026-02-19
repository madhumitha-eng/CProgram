#include <stdio.h>

int main() {
    int day, month, year, days = 0;

    printf("Enter Date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    int leap = (year%4==0 && year%100!=0) || (year%400==0);

    int monthDays[] = {31,28+leap,31,30,31,30,31,31,30,31,30,31};

    for(int i=0; i<month-1; i++)
        days += monthDays[i];

    days += day;

    printf("Total days passed: %d\n", days);

    if (month>=3 && month<=5)
        printf("Season: Spring\n");
    else if (month>=6 && month<=8)
        printf("Season: Summer\n");
    else if (month>=9 && month<=11)
        printf("Season: Autumn\n");
    else
        printf("Season: Winter\n");

    return 0;
}

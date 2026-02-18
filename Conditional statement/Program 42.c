#include <stdio.h>

int main() {
    float totalScore, overs, runRate, percentage;

    printf("Enter total score and overs played: ");
    scanf("%f%f",&totalScore,&overs);

    runRate = totalScore / overs;
    percentage = (runRate / 10) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    if(percentage < 50)
        printf("Opponent team can win.");
    else if(percentage == 50)
        printf("Equal chance of winning.");
    else
        printf("Batting team can win.");

    return 0;
}

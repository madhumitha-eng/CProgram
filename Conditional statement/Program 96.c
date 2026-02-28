#include <stdio.h>

int main() {
    int m1, m2, final, project, highest;

    printf("Enter mid1, mid2, final, project marks: ");
    scanf("%d %d %d %d", &m1, &m2, &final, &project);

    highest = m1;
    if (m2 > highest) highest = m2;
    if (final > highest) highest = final;
    if (project > highest) highest = project;

    printf("Highest score = %d\n", highest);

    return 0;
}

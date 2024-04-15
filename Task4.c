#include <stdio.h>
#include "Tasks.h"

void fcTask4(void)
{
    printf("Perform task 4\n");

    int points;
    float bonus = 0;
    scanf("%d", &points);

    if (points <= 100) {
        bonus += 5;
    } else if (points > 100 && points <= 1000) {
        bonus += points * 0.2;
    } else {
        bonus += points * 0.1;
    }

    if (points % 2 == 0) {
        bonus += 1;
    }
    if (points % 10 == 5) {
        bonus += 2;
    }

    if ((int) bonus == bonus) {
        printf("%d\n", (int) bonus);
    } else {
        printf("%.1f\n", bonus);
    }
    if ((int) bonus + points == bonus + (float) points) {
        printf("%d\n", (int) bonus + points);
    } else {
        printf("%.1f\n", bonus + (float) points);
    }
}

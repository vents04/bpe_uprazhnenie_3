#include <stdio.h>
#include "Tasks.h"

void fcTask7(void)
{
    printf("Perform task 7\n");

    int distance;
    char time;
    float taxiCost, busCost = 0, trainCost = 0;

    scanf("%d", &distance);
    scanf(" %c", &time);

    taxiCost = 0.7 + (time == 'D' ? 0.79 : 0.9) * distance;

    if (distance >= 20) {
        busCost = 0.09 * distance;
    }

    if (distance >= 100) {
        trainCost = 0.06 * distance;
    }

    float minCost = taxiCost;
    if (busCost < minCost && busCost != 0) {
        minCost = busCost;
    }
    if (trainCost < minCost && trainCost != 0) {
        minCost = trainCost;
    }

    printf("%.2f\n", minCost);
}

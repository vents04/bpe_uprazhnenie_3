#include <stdio.h>
#include "Tasks.h"

void fcTask8(void)
{
    printf("Perform task 8\n");

    float volume;
    float pipe1FlowRate, pipe2FlowRate;
    int hours;

    scanf("%f", &volume);
    scanf("%f", &pipe1FlowRate);
    scanf("%f", &pipe2FlowRate);
    scanf("%d", &hours);

    float totalWaterInflow = (pipe1FlowRate + pipe2FlowRate) * hours;

    if (totalWaterInflow >= volume) {
        printf("The volume of the pool is full of water.\n");
    } else {
        printf("The water volume in the pool after %d hours is %.2f litres.\n", hours, totalWaterInflow);
    }
}

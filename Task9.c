#include <stdio.h>
#include "Tasks.h"

void fcTask9(void)
{
    printf("Perform task 9\n");

    float area, grapePerSqMeter, desiredWine;

    scanf("%f", &area);
    scanf("%f", &grapePerSqMeter);
    scanf("%f", &desiredWine);

    float totalGrape = area * grapePerSqMeter;

    float wineProduced = (totalGrape * 0.4) / 2.5;

    printf("Total wine produced: %.2f liters\n", wineProduced);

    if (wineProduced >= desiredWine) {
        printf("The desired amount of wine is sufficient.\n");
        float remainingWine = wineProduced - desiredWine;
        if (remainingWine > 0) {
            printf("Remaining wine will be divided equally among the workers.\n");
            int numWorkers;
            printf("Enter the number of workers: ");
            scanf("%d", &numWorkers);
            float winePerWorker = remainingWine / numWorkers;
            printf("Each worker will receive %.2f liters of wine.\n", winePerWorker);
        }
    } else {
        printf("The desired amount of wine is not sufficient.\n");
    }
}

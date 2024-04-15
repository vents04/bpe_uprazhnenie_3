#include <stdio.h>
#include "Tasks.h"

void fcTask10(void)
{
    printf("Perform task 10\n");

    const int range1 = 200, range2 = 400, range3 = 600, range4 = 800;
    int n, number;
    int counts[5] = {0};

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &number);
        if (number < range1) {
            counts[0]++;
        } else if (number < range2) {
            counts[1]++;
        } else if (number < range3) {
            counts[2]++;
        } else if (number < range4) {
            counts[3]++;
        } else {
            counts[4]++;
        }
    }

    int total = counts[0] + counts[1] + counts[2] + counts[3] + counts[4];
    float percentages[5];
    for (int i = 0; i < 5; ++i) {
        percentages[i] = (float)counts[i] / total * 100;
    }

    printf("Percentage of numbers in each range:\n");
    printf("Less than 200: %.2f%%\n", percentages[0]);
    printf("200 - 399: %.2f%%\n", percentages[1]);
    printf("400 - 599: %.2f%%\n", percentages[2]);
    printf("600 - 799: %.2f%%\n", percentages[3]);
    printf("800 and above: %.2f%%\n", percentages[4]);
}

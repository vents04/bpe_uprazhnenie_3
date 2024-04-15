#include <stdio.h>
#include "Tasks.h"

void fcTask5(void)
{
    printf("Perform task 5\n");

    int time1, time2, time3;
    int totalSeconds, minutes, seconds;

    scanf("%d", &time1);
    scanf("%d", &time2);
    scanf("%d", &time3);

    totalSeconds = time1 + time2 + time3;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("%d:%02d\n", minutes, seconds);
}

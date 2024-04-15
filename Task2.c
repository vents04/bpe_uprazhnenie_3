#include <stdio.h>
#include "Tasks.h"

void fcTask2(void)
{
    printf("Perform task 2\n");

    int hour, minute;
    scanf("%d", &hour);
    scanf("%2d", &minute);

    minute += 15;
    if (minute >= 60) {
        minute -= 60;
        hour = (hour + 1) % 24;
    }

    printf("%d:%02d\n", hour, minute);
}

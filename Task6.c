#include <stdio.h>
#include "Tasks.h"

void fcTask6(void)
{
    printf("Perform task 6\n");

    int x1, y1, x2, y2, x, y;

    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    scanf("%d", &x);
    scanf("%d", &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Inside\n");
    } else {
        printf("Outside\n");
    }
}

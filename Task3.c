#include <stdio.h>
#include "Tasks.h"

void fcTask3(void)
{
    printf("Perform task 3\n");

    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a == b && a == c) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}

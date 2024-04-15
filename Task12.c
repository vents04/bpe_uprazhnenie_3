#include <stdio.h>
#include "Tasks.h"

void drawChars(char c, int repetitions) {
    for (int index = 0; index < repetitions; index++) {
        printf("%c", c);
    }
}

void drawRow(int halfWidth, int isTop, int isStar) {
    drawChars(isStar ? '*' : '-', halfWidth - 1);
    printf(isTop ? "\\  /" : "/  \\");
    drawChars(isStar ? '*' : '-', halfWidth - 1);
}

void drawHalfHeight(int halfHeight, int halfWidth, int isTop) {
    for (int index = 0; index < halfHeight; index++) {
        drawRow(halfWidth, isTop, index % 2 == 0);
        printf("\n");
    }
}

void drawMiddle(int halfWidth) {
    for (int index = 0; index < halfWidth; index++) {
        printf(" ");
    }
    printf("@\n");
}

void fcTask12(void)
{
    printf("Perform task 12\n");

    int n;
    scanf("%d", &n);

    int halfWidth = n - 1;
    int halfHeight = n - 2;

    drawHalfHeight(halfHeight, halfWidth, 1);
    drawMiddle(halfWidth);
    drawHalfHeight(halfHeight, halfWidth, 0);
}

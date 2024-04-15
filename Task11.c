#include <stdio.h>
#include "Tasks.h"

void drawFirstHalfTop(int n, int peaks) {
    for (int columnSide = 1; columnSide <= n; columnSide++) {
        if (columnSide == 1) {
            printf("/");
        } else if (columnSide == peaks / 2 + 2) {
            printf("\\");
        } else if (columnSide <= peaks / 2 + 1) {
            printf("^");
        } else {
            printf("_");
        }
    }
}

void drawSecondHalfTop(int n, int peaks) {
    for (int columnSide = 1; columnSide <= n; columnSide++) {
        if (columnSide < n - peaks / 2 - 1) {
            printf("_");
        } else if (columnSide == n - peaks / 2 - 1) {
            printf("/");
        } else if (columnSide > n - peaks / 2 - 1 && columnSide != n) {
            printf("^");
        } else {
            printf("\\");
        }
    }
    printf("\n");
}

void drawBody(int n, int peaks) {
    int baseLength = n * 2 - peaks - 4;
    for (int row = 2; row <= n - 1; row++) {
        if (row == n - 1 && baseLength > 0) {
            for (int column = 1; column <= n * 2; column++) {
                if (column == 1 || column == n * 2) {
                    printf("|");
                } else if (n % 2 ==0 && column >= n - 1 && column < n + baseLength - 1) {
                    printf("_");
                } else if (column >= n && column < n + 2) {
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }
        } else if (row != n) {
            for (int column = 1; column <= n * 2; column++) {
                if(column == 1 || column == n * 2) {
                    printf("|");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void drawFirstHalfBottom(int n, int peaks) {
    for (int columnSide = 1; columnSide <= n; columnSide++) {
        if (columnSide == 1) {
            printf("\\");
        } else if (columnSide == peaks / 2 + 2) {
            printf("/");
        } else if (columnSide <= peaks / 2 + 1) {
            printf("_");
        } else {
            printf(" ");
        }
    }
}

void drawSecondHalfBottom(int n, int peaks) {
    for (int columnSide = 1; columnSide <= n; columnSide++) {
        if (columnSide < n - peaks / 2 - 1) {
            printf(" ");
        } else if (columnSide == n - peaks / 2 - 1) {
            printf("\\");
        } else if (columnSide > n - peaks / 2 - 1 && columnSide != n) {
            printf("_");
        } else {
            printf("/");
        }
    }
    printf("\n");
}

void fcTask11(void)
{
    printf("Perform task 11\n");

    int n;
    scanf("%d", &n);
    int width = 2 * n;
    int height = n;

    int peaks = (n / 2) * 2;
    int nonPeaks = n * 2 - peaks;

    drawFirstHalfTop(n, peaks);
    drawSecondHalfTop(n, peaks);
    drawBody(n, peaks);
    drawFirstHalfBottom(n, peaks);
    drawSecondHalfBottom(n, peaks);
}

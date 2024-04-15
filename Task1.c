#include <stdio.h>
#include "Tasks.h"

#define MAX_ARRAY_SIZE 1000

int findSmallest(int *numbers, int size) {
    if (size == 0) {
        printf("The array is empty. Returning 0 for smallest value\n");
        return 0;
    }

    int smallest = *numbers;
    for (int index = 1; index < size; index++) {
        if (*(numbers + index) < smallest) {
            smallest = *(numbers + index);
        }
    }
    return smallest;
}

int findGreatest(int *numbers, int size) {
    if (size == 0) {
        printf("The array is empty. Returning 0 for largest value\n");
        return 0;
    }

    int largest = *numbers;
    for (int index = 1; index < size; index++) {
        if (*(numbers + index) > largest) {
            largest = *(numbers + index);
        }
    }
    return largest;
}

void fcTask1(void)
{
    printf("Perform task 1\n");
    printf("Enter numbers [Enter 0 to finish]:\n");

    int numbers[MAX_ARRAY_SIZE];
    int input;
    int counter = 0;

    while (counter < MAX_ARRAY_SIZE) {
        scanf("%d", &input);
        if (input == 0) break;
        numbers[counter] = input;
        counter++;
    }

    int size = counter;
    int smallest = findSmallest(numbers, size);
    int greatest = findGreatest(numbers, size);

    printf("Min: %d\n", smallest);
    printf("Max: %d\n", greatest);
}

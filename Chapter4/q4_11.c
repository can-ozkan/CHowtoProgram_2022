#include <stdio.h>

/*
Write a C program that finds the smallest of several integers.
Assume that the first value read specifies the number of values remaining.
*/

int main(void) {

    int count, number, smallest;

    // Prompt for number of values
    printf("Enter the number of values: ");
    scanf("%d", &count);

    // Validate input
    if (count <= 0) {
        printf("The number of values must be positive.\n");
        return 1;
    }

    // Read the first number and assume it is the smallest
    printf("Enter value 1: ");
    scanf("%d", &smallest);  // Initialize smallest with first value

    // Loop to read the remaining values
    for (int i = 2; i <= count; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &number);

        if (number < smallest) {
            smallest = number;
        }
    }

    // Display result
    printf("The smallest value is: %d\n", smallest);

    return 0;
}


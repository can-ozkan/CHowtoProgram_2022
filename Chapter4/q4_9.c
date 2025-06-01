#include <stdio.h>

/*
Write a program that sums a sequence of integers.
Assume that the first integer read with scanf specifies the number of values remaining
to be entered. Your program should read only one value each time scanf executes. A
typical input sequence might be
5 100 200 300 400 500
where the 5 indicates that the next five values are to be summed.
*/

int main(void) {

    int count, value, sum = 0;

    // Read how many values to sum
    printf("Enter the number of values to sum: ");
    scanf("%d", &count);

    // Validate input
    if (count <= 0) {
        printf("The number of values must be positive.\n");
        return 1;
    }

    // Read and sum values
    for (int i = 1; i <= count; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        sum += value;
    }

    // Display result
    printf("The total sum is: %d\n", sum);

    return 0;
}


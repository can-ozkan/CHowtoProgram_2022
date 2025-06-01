#include <stdio.h>

/*
Write a program that calculates and prints the
average of several integers. Assume the last value read with scanf is the sentinel 9999 .
A typical input sequence might be
10 8 11 7 9 9999
indicating that the average of all the values preceding 9999 is to be calculated.
*/

int main(void) {

    int number, sum = 0, count = 0;
    float average;

    printf("Enter integers (9999 to stop):\n");

    scanf("%d", &number);

    while (number != 9999) {
        sum += number;
        count++;
        scanf("%d", &number);
    }

    if (count == 0) {
        printf("No values entered before 9999.\n");
    } else {
        average = (float)sum / count;
        printf("Average of the entered numbers: %.2f\n", average);
    }

    return 0;
}


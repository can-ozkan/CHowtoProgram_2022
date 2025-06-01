#include <stdio.h>

/*
Write a C program that uses scanf to input a series of  10 non-negative numbers and determines and prints the largest
of the numbers. Your  program should use three variables:
a) counter —A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine
when all 10 numbers have been processed).
b) number —The current number input to the program.
c) largest —The largest number found so far.
*/

int main(void) {

    int counter = 1;
    int number;
    int largest = 0;  // Assuming all inputs are non-negative

    while (counter <= 10) {
        printf("Enter non-negative number %d : ", counter);
        scanf("%d", &number);

        if (number < 0) {
            printf("Invalid input. Please enter a non-negative number.\n");
            continue; // Don't increment counter, retry input
        }

        if (number > largest)
            largest = number;

        counter++;
    }

    printf("\nThe largest number entered was: %d\n", largest);

    return 0;
}

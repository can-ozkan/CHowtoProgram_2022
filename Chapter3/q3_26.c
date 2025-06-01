#include <stdio.h>

/*
Find the two largest values of the 10 numbers. You may input each number only once
*/

int main(void) {

    int number, largest, secondLargest;
    int counter = 1;

    printf("Enter number 1: ");
    scanf("%d", &number);

    // Initialize largest and secondLargest
    largest = number;
    secondLargest = -2147483648; // Minimum int value

    // Input remaining 9 numbers
    while (counter < 10) {
        printf("Enter number %d: ", counter + 1);
        scanf("%d", &number);

        if (number > largest) {
            secondLargest = largest;
            largest = number;
        } else if (number > secondLargest && number != largest) {
            secondLargest = number;
        }

        counter++;
    }

    printf("\nThe largest number is: %d\n", largest);
    printf("The second largest number is: %d\n", secondLargest);

    return 0;
}

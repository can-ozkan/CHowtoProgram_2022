#include <stdio.h>

/*
Write a C program that prints 100 asterisks, one at a time. After every tenth asterisk, print a newline character.
[Hint: Count from 1 to  100. Use the % operator to recognize each time the counter reaches a multiple of 10.]
*/

int main(void) {

    int number, digit, count = 0;

    printf("Enter an integer (up to 5 digits): ");
    scanf("%d", &number);

    // Make sure the number is positive for digit extraction
    if (number < 0) {
        number = -number;
    }

    // Count the number of 7s
    while (number > 0) {
        digit = number % 10;
        if (digit == 7) {
            count++;
        }
        number = number / 10;
    }

    printf("The number contains %d digit(s) of 7.\n", count);
    
    return 0;
}

#include <stdio.h>

/*
A palindrome is a number or a text phrase that reads the  same backward as forward. For example, each of the
following five-digit integers is a  palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a
five- digit integer and determines whether or not it’s a palindrome. [Hint: Use the division  and remainder operators
to separate the number into its individual digits.]
*/

int main(void) {

    int number;
    int digit1, digit2, digit3, digit4, digit5;

    // Input
    printf("Enter a five-digit integer: ");
    scanf("%d", &number);

    // Validate input
    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a five-digit number.\n");
        return 1;
    }

    // Extract digits
    digit1 = number / 10000;
    digit2 = (number % 10000) / 1000;
    digit3 = (number % 1000) / 100;
    digit4 = (number % 100) / 10;
    digit5 = number % 10;

    // Check palindrome: digit1 == digit5 and digit2 == digit4
    if (digit1 == digit5 && digit2 == digit4) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

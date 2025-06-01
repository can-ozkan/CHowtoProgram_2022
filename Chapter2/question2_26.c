#include <stdio.h>

/*
(Separating Digits in an Integer) Write a program that inputs one five-digit
number, separates the number into its individual digits and displays the digits sepa-
rated from one another by three spaces each. [Hint: Use combinations of integer di-
vision and the remainder operation.]
*/

int main(void) {

    int number;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Separate digits using division and remainder
    int digit1 = number / 10000;
    int digit2 = (number % 10000) / 1000;
    int digit3 = (number % 1000) / 100;
    int digit4 = (number % 100) / 10;
    int digit5 = number % 10;

    // Display digits with three spaces in between
    printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);
    
    return 0;
}

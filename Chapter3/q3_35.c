#include <stdio.h>

/*
Input a binary integer (5  digits or fewer) containing only 0s and 1s and print its decimal equivalent.
*/

int main(void) {

    int binary, decimal = 0, base = 1, remainder;

    printf("Enter a binary number (up to 5 digits, only 0s and 1s): ");
    scanf("%d", &binary);

    int temp = binary; // Save original input for validation

    // Validate and convert
    while (binary > 0) {
        remainder = binary % 10;

        // Check if digit is not 0 or 1
        if (remainder != 0 && remainder != 1) {
            printf("Invalid input: Only binary digits (0 and 1) are allowed.\n");
            return 1;
        }

        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal equivalent of %d is %d\n", temp, decimal);

    return 0;
}

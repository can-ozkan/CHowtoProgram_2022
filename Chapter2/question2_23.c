#include <stdio.h>

/*
(Multiples) Write a program that reads two integers and determines and dis-
plays whether the first is a multiple of the second. Use the remainder operator.
*/

int main(void) {

    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check for zero divisor
    if (num2 != 0) {
        if (num1 % num2 == 0)
            printf("%d is a multiple of %d\n", num1, num2);
        if (num1 % num2 != 0)
            printf("%d is not a multiple of %d\n", num1, num2);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

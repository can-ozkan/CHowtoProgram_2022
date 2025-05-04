#include <stdio.h>

// (Arithmetic) Write a program that reads two integers from the user then dis-
// plays their sum, product, difference, quotient and remainder.


int main(void) {

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf( "%d + %d = %d\n", num1, num2, num1 + num2);
    printf( "%d - %d = %d\n", num1, num2, num1 - num2);
    printf( "%d * %d = %d\n", num1, num2, num1 * num2);
    printf( "%d / %d = %d\n", num1, num2, num1 / num2);
    printf( "%d %% %d = %d\n", num1, num2, num1 % num2);



    return 0;
}

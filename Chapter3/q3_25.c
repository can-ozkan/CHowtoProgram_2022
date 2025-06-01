#include <stdio.h>

/*
Write a program that uses looping to print the following table of values.
*/

int main(void) {

    int A, i;

    // Print table header
    printf("A\tA+2\tA+4\tA+6\n");

    // Loop through values of A: 3, 6, 9, 12, 15
    for (A = 3; A <= 15; A += 3) {
        // Print A, A+2, A+4, A+6
        for (i = 0; i <= 6; i += 2) {
            printf("%d\t", A + i);
        }
        printf("\n");
    }

    return 0;
}

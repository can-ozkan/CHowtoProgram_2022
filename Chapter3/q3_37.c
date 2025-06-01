#include <stdio.h>

/*
Write a C program that prints 100 asterisks, one at a time. After every tenth asterisk, print a newline character.
[Hint: Count from 1 to  100. Use the % operator to recognize each time the counter reaches a multiple of 10.]
*/

int main(void) {

    int i;

    for (i = 1; i <= 100; i++) {
        printf("*");

        // After every 10th asterisk, print a newline
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}

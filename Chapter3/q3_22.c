#include <stdio.h>

/*
Write a program that utilizes looping to print
the numbers from 1 to 10 side by side on the same line with three spaces between
numbers
*/

int main(void) {

    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d   ", i);  // 3 spaces after the number
    }

    printf("\n");

    return 0;
}

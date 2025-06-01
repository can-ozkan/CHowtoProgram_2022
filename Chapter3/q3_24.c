#include <stdio.h>

/*
Write a program that uses looping to print the following table of values. Use the tab escape sequence, \t , in the
printf statement to separate the  columns with tabs.
*/

int main(void) {

    int N;

    // Print table header
    printf("N\t10*N\t100*N\t1000*N\n");

    // Loop from 1 to 10
    for (N = 1; N <= 10; N++) {
        printf("%d\t%d\t%d\t%d\n", N, 10 * N, 100 * N, 1000 * N);
    }

    return 0;
}

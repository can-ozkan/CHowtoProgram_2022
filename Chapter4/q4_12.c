#include <stdio.h>

/*
Write a C program that calculates and  prints the sum of the even integers from 2 to 30
*/

int main(void) {

    int i;
    int sum = 0;

    for (i = 2; i <= 30; i+=2) {
        sum += i;
    }

    printf("The sum of the even integers from 2 to 30 is: %d\n", sum);

    return 0;
}


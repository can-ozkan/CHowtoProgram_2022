#include <stdio.h>

/*
Write a C program that calculates and prints the product of the odd integers from 1 to 15
*/

int main(void) {

    int i;
    unsigned long long product = 1;  // Use a large type to hold the product

    for (i = 1; i <= 15; i += 2) {
        product *= i;
    }

    printf("The product of the odd integers from 1 to 15 is: %llu\n", product);

    return 0;
}


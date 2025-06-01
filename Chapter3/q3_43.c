#include <stdio.h>

/*
Write a C program that reads three nonzero integer values and determines and prints whether they could represent the sides of a triangle.
*/

int main(void) {

    int a, b, c;

    // Input
    printf("Enter three non-zero integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for non-zero values
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be non-zero.\n");
        return 1;
    }

    // Apply triangle inequality
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("These values can form a triangle.\n");
    } else {
        printf("These values cannot form a triangle.\n");
    }

    return 0;
}

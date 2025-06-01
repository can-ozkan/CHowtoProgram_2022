#include <stdio.h>

/*
Write a C program that reads three nonzero integers and determines and prints whether they could be the sides
of a right triangle.
*/

int main(void) {

    int a, b, c;
    int max, x, y;

    // Input
    printf("Enter three non-zero integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    // Validate non-zero
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be non-zero.\n");
        return 1;
    }

    // Determine the largest (hypotenuse candidate)
    if (a > b && a > c) {
        max = a;
        x = b;
        y = c;
    } else if (b > a && b > c) {
        max = b;
        x = a;
        y = c;
    } else {
        max = c;
        x = a;
        y = b;
    }

    // Check Pythagorean theorem: max² = x² + y²
    if (max * max == x * x + y * y) {
        printf("These values can form a right triangle.\n");
    } else {
        printf("These values cannot form a right triangle.\n");
    }

    return 0;
}

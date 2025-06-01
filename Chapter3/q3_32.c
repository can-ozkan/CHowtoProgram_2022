#include <stdio.h>

/*
Write a C program that reads in the side of a square and then  prints that square out of asterisks. Your program should
work for squares of all side sizes between 1 and 20.
*/

int main(void) {

    int side, row, col;

    // Input
    printf("Enter the side length of the square (1 to 20): ");
    scanf("%d", &side);

    // Validate input
    if (side < 1 || side > 20) {
        printf("Invalid input. Side length must be between 1 and 20.\n");
        return 1;
    }

    // Print square using nested loops
    for (row = 1; row <= side; row++) {
        for (col = 1; col <= side; col++) {
            printf("*");
        }
        printf("\n");  // Move to next row
    }

    return 0;
}

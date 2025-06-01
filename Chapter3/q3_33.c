#include <stdio.h>

/*
Modify the program you wrote in the preceding exercise so that it prints a hollow square.
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

    // Print hollow square
    for (row = 1; row <= side; row++) {
        for (col = 1; col <= side; col++) {
            // Print * on the border; space otherwise
            if (row == 1 || row == side || col == 1 || col == side)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

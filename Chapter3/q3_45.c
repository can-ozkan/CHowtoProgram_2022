#include <stdio.h>

/*
Write a C program that reads a non-negative integer and computes and prints its factorial. Use iterative and
recursive ways in different functions.
*/
unsigned long long factorial_iterative(int n);
unsigned long long factorial_recursive(int n);


int main(void) {

    int number;

    // Input
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Compute and display
    printf("Factorial of %d (iterative): %llu\n", number, factorial_iterative(number));
    printf("Factorial of %d (recursive): %llu\n", number, factorial_recursive(number));

    return 0;
}

// Function to compute factorial iteratively
unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to compute factorial recursively
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

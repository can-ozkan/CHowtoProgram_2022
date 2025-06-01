#include <stdio.h>

/*
Write a program that inputs three different numbers
from the user. Display the numbers in increasing order. Recall that an if statement’s
body can contain more than one statement. Prove that your script works by running
it on all six possible orderings of the numbers. Does your script work with duplicate
numbers?
*/

int main(void) {

    int a, b, c;
    int smallest, middle, largest;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find smallest
    smallest = a;
    if (b < smallest) {smallest = b;}
    if (c < smallest) {smallest = c;}

    // Find largest
    largest = a;
    if (b > largest) {largest = b;}
    if (c > largest) {largest = c;}

    // Find middle
    if ((a != smallest) &&  a != largest) {
        middle = a;
    }

    if ((b != smallest) &&  b != largest) {
        middle = b;
    }

    if ((c != smallest) &&  c != largest) {
        middle = c;
    }

    // Special case: two values are the same (needed to make it always work)
    if ((a == b) || (b == c) || (a == c)) {
        printf("Warning: You entered duplicate numbers.\n");
    }

    // Output in order
    printf("Numbers in increasing order: %d %d %d\n", smallest, middle, largest);

    return 0;
}

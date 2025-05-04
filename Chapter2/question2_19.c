#include <stdio.h>

/*
(Comparing Integers) Write a program that reads two integers from the user
then displays the larger number followed by the words “ is larger .” If the numbers
are equal, display the message “ These numbers are equal .” Use only the single-selec-
tion form of the if statement you learned in this chapter.
*/

int main(void) {

    int a, b, c;
    int sum = 0, average, product;
    int smallest, largest;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3;
    product = a * b * c;

    //Assume that a is the smallest and the largest initially
    smallest = a;
    largest = a;

    //Find the smallest
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    //Find the largest
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    // Print results
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}

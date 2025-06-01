#include <stdio.h>

/*
Write a C program that reads the radius of a circle (as a double value) and computes and prints the diameter,
the circumference and the area. Use the value 3.14159 for π.
*/

int main(void) {

    double radius;
    const double PI = 3.14159;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate and display results
    printf("Diameter: %.2f\n", 2 * radius);
    printf("Circumference: %.2f\n", 2 * PI * radius);
    printf("Area: %.2f\n", PI * radius * radius);

    return 0;
}

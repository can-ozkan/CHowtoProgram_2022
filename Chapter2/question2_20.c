#include <stdio.h>

/*
(Circle Area, Diameter and Circumference) For a circle of radius 2, display the
diameter, circumference and area. Use the value 3.14159 for π . Use the following for-
mulas (r is the radius): diameter = 2r, circumference = 2 π r and area = π r 2 . Perform each
of these calculations inside the printf statement(s) and use the conversion specifica-
tion %f . This chapter discussed only integer constants and variables.
*/

int main(void) {

    double radius = 2.0;
    const double pi = 3.14159;

    printf("radius = %lf\n", radius);
    printf("pi = %lf\n", pi);
    printf("Diameter = %lf\n", radius * 2);
    printf("Area = %lf\n", radius * radius);
    printf("Circumference = %lf\n", pi * radius * radius);

    return 0;
}

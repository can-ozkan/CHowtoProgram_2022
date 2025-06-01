#include <stdio.h>

/*
Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track of several tankfuls
of gasoline by recording miles  driven and gallons used for each tankful. Develop a program that uses scanf to input
the miles driven and gallons used for each tankful. The program should calculate and  display the miles per gallon
obtained for each tankful. After processing all input information, the program  should calculate and print the combined
miles per gallon obtained for all tankfuls.
*/

int main(void) {

    double miles, gallons;
    double totalMiles = 0;
    double totalGallons = 0;

    printf("Please miles driven (-1 to end): "); // -1 is a sentinel value
    scanf("%lf", &miles);

    while (miles != -1) {
        printf("Please gallons used: ");
        scanf("%lf", &gallons);

        if (gallons == 0) {
            printf("Gallons must be greater than 0\n");
        } else {
            printf("Miles per gallon for this tankful: %.2f\n", miles / gallons);
            totalGallons += gallons;
            totalMiles += miles;
        }

        printf("Please miles driven (-1 to end): "); // -1 is a sentinel value
        scanf("%lf", &miles);
    }

    if (totalGallons > 0) {
        printf("\nOverall miles per gallon: %.2f\n", totalMiles / totalGallons);
    } else {
        printf("\nNo valid data is entered\n");
    }

    return 0;
}

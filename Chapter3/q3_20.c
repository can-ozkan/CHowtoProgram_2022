#include <stdio.h>

/*
Develop a program that will determine the gross pay for
each of several employees. The company pays “straight time” for the first 40 hours
worked by each employee and pays “time-and-a-half” for all hours worked in excess
of 40 hours. You’re given a list of the company’s employees, the number of hours each
worked last week and each employee’s hourly rate. Your program should use scanf
to input this information for each employee and determine and display the employee’s gross pay
*/

int main(void) {

    double hours, rate, grossPay;

    // Input first employee
    printf("Enter hours worked (-1 to end): ");
    scanf("%lf", &hours);

    while (hours != -1) {
        printf("Enter hourly rate: ");
        scanf("%lf", &rate);

        // Calculate gross pay
        if (hours <= 40)
            grossPay = hours * rate;
        else
            grossPay = 40 * rate + (hours - 40) * rate * 1.5;

        // Display result
        printf("Gross pay: $%.2f\n\n", grossPay);

        // Input next employee
        printf("Enter hours worked (-1 to end): ");
        scanf("%lf", &hours);
    }

    printf("Program ended.\n");

    return 0;
}

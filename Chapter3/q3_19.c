#include <stdio.h>

/*
The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, so it divides by
365 (days per year). Develop a program that uses scanf to input principal , rate
and days for several loans, and will calculate and display the simple interest for each
loan, using the preceding formula.
*/

int main(void) {

    double principal, rate, interest;
    int days;

    printf("Enter loan principal amount (-1 to end): ");
    scanf("%lf", &principal);

    while (principal != -1) {
        printf("Enter annual interest rate (as a decimal, e.g., 0.05 for 5%%): ");
        scanf("%lf", &rate);

        printf("Enter number of days the loan is outstanding: ");
        scanf("%d", &days);

        // Calculate simple interest
        interest = principal * rate * days / 365;

        // Display result
        printf("The interest charge is $%.2f\n\n", interest);

        // Prompt again
        printf("Enter loan principal amount (-1 to end): ");
        scanf("%lf", &principal);
    }

    printf("Program ended.\n");

    return 0;
}

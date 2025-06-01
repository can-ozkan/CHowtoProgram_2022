#include <stdio.h>

/*
One large chemical company pays its salespeople on a commission basis. The salespeople receive $200 per
week plus 9% of their gross sales for that week. For example, a salesperson who sells $5000 worth of chemicals in a
week receives $200 plus 9% of $5000, or a total of $650. Develop a program
that will use scanf to input each salesperson’s gross sales for last week and calculate and display that salesperson’s
earnings. Process one salesperson's figures at a time.
*/

int main(void) {

    double grossSales, earnings;

    printf("Enter salesperson's gross sales for the week (-1 to end): ");
    scanf("%lf", &grossSales);

    while (grossSales != -1) {
        earnings = 200 + 0.09 * grossSales;
        printf("Salesperson's earnings: $%.2f\n\n", earnings);

        printf("Enter salesperson's gross sales for the week (-1 to end): ");
        scanf("%lf", &grossSales);
    }

    printf("Program ended.\n");

    return 0;
}

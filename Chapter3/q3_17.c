#include <stdio.h>

/*
Develop a C program that will determine whether a
department-store customer has exceeded the credit limit on a charge account. For
each customer, the following facts are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should use scanf to input each fact, calculate the new balance (=
beginning balance + charges – credits), and determine whether the new balance exceeds
the customer's credit limit. For those customers whose credit limit is exceeded, the
program should display the customer's account number, credit limit, new balance
and the message “Credit limit exceeded.”
*/

int main(void) {

    int accountNumber;
    double beginningBalance, charges, credits, creditLimit, newBalance;

    // Input customer data
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    printf("Enter beginning balance: ");
    scanf("%lf", &beginningBalance);

    printf("Enter total charges: ");
    scanf("%lf", &charges);

    printf("Enter total credits: ");
    scanf("%lf", &credits);

    printf("Enter allowed credit limit: ");
    scanf("%lf", &creditLimit);

    // Calculate new balance
    newBalance = beginningBalance + charges - credits;

    // Check and report
    if (newBalance > creditLimit) {
        printf("\nAccount: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("New balance: %.2f\n", newBalance);
        printf("Credit limit exceeded.\n");
    } else {
        printf("\nAccount: %d\n", accountNumber);
        printf("New balance: %.2f (within credit limit)\n", newBalance);
    }

    return 0;
}

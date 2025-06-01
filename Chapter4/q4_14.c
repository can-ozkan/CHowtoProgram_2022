#include <stdio.h>

/*
Write a program that evaluates the
factorials of the integers from 1 to 5. Print the results in tabular format. What difficulty might prevent you
from calculating the factorial of 20?
*/

int main(void) {

    int i;
    unsigned long long factorial = 1;

    printf("Number\tFactorial\n");
    printf("--------------\n");

    for (i=1; i<=10; i++) {
        factorial *= i;
        printf("%d\t%llu\n", i, factorial);
    }

    return 0;
}


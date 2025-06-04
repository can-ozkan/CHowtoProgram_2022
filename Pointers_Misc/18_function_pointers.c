#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int performArithmetic(int a, int b, int (*f)(int, int));

int main(void) {

    int a = 10, b = 5;

    int sum = performArithmetic(a,b, add);
    int difference = performArithmetic(a,b, subtract);
    int product = performArithmetic(a,b, multiply);
    int quotient = performArithmetic(a,b, divide);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);


    return 0;
}

int performArithmetic(int a, int b, int (*f)(int, int)) {
    return f(a, b);
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

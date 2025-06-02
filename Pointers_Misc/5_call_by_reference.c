#include <stdio.h>

/*
    pointers as function arguments - call by reference
*/
void increment(int a);
void increment_reference(int *a);

int main(void) {

    int a = 10; // this is a local variable
    printf("The address of variable is %p in function main\n", &a);
    increment(a); // call by value. The value of variable a is copied into the function.
    printf("%d\n", a);

    increment_reference(&a); // call by reference
    printf("%d\n", a);

    return 0;
}

void increment(int a) {
    a = a + 1; // this is a local variable, too. This is different than the same variable name defined in main func.
    printf("The address of variable is %p in function increment\n", &a);
}

void increment_reference(int *a) {
    *a = *a + 1;
}


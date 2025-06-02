#include <stdio.h>

/*
Pointers are variables that store address of another variable
*/

int main(void) {

    int num = 5;
    int *p; // p is a pointer variable that points to an integer
    p = &num; // p stores an address of variable named num

    printf("The value of pointer is %p\n", p);
    printf("The address of num is %p\n", &num); // address of num
    printf("Dereferencing the p is %d\n", *p); // it is called dereferencing
    printf("The address of p is %p\n", &p);

    *p = 10;
    printf("Dereferencing the p is %d\n", *p); // it is called dereferencing

    return 0;
}


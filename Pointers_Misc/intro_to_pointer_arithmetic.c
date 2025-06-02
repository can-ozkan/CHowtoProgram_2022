#include <stdio.h>

/*
Pointers are variables that store address of another variable
*/

int main(void) {

    int num = 5;
    int *p; // p is a pointer variable that points to an integer
    p = &num; // p stores an address of variable named num

    printf("Size of an integer variable is %d\n", sizeof(int));
    printf("Address p is %p\n", p); // assume it is 000000288f3ff8a4

    // because  p is an integer pointer
    // incrementing it by one unit takes us to the address of the next integer
    printf("Address p+1 is %p\n", ++p); // then it will be 000000288f3ff8a8

    printf("The value at p+1 is %d\n", *(p+1)); // it prints out a garbage value at memory
    
    return 0;
}


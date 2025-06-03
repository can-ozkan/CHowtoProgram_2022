#include <stdio.h>

/*
    pointers as function returns
    It is possible for a function to return a pointer
*/

int* add(int *a, int *b);

int main(void) { // calling function

    int a=2, b=4;
    int *c = add(&a, &b);
    printf("%d\n", *c);

    return 0;
}

int* add(int *a, int *b) { // called function
    int c = (*a) + (*b); // c is a local variable on the stack
    return &c; // Returning address of local variable (bad!)

    // c is local to the function. When the function ends, its memory is no longer valid.
    // Using &c after the function returns is undefined behavior.
    // When you dereference that pointer in main, you're reading from memory that may have already been
    // reused or invalid
}




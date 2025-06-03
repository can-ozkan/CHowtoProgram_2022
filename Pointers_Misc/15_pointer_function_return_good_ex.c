#include <stdio.h>
#include <stdlib.h>

/*
    pointers as function returns
    It is possible for a function to return a pointer
    Addresses from heap and global section can be returned because these regions are explicitly deallocated.
    Stack region is deallocated automatically.
    When returning pointers from functions, we need to be very careful about the scope.
    We must be sure that the address is not reused to store something else or the data is not cleared
    from that address.
    In most cases, a pointer pointing to a memory in heap (or global section) is returned.
*/

int* add(int *a, int *b);

int main(void) { // calling function

    int a=2, b=4;
    int *c = add(&a, &b);
    printf("%d\n", *c);

    return 0;
}

int* add(int *a, int *b) {
    int *c = malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;

}

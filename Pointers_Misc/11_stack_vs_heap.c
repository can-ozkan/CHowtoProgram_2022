#include <stdio.h>
#include <stdlib.h>

/*
    code segment is assigned to store instructions that need to be executed by CPU.
    static/global section store static and global variables, i.e., variables not declared in functions
    They have whole life time of an application and they are accessible anywhere during the program life cycle.
    stack section is used to store all the information of function calls, e.g., local variables, parameters, return
    information, etc. Local variables are declared inside functions and they live only until the time the function is
    being executed.
    The memory allocated for three sections does not grow while the program is running. Apps cannot request
    more memory from stack.

    Unlike stack, heap is not fixed. Its size can vary during the lifetime of the program. There is no rule for
    allocation and de-allocation of memory. A program can control how much memory to use from the heap as long as
    they want.

    Heap is also called dynamic memory and using the heap is referred to as dynamic memory allocation.
    Important heap functions in C language: malloc(), calloc(), realloc(), free().
    Important heap functions in C++ language: new(), heap(). They are called operators
    Anything on the heap is not automatically de-allocated. It needs to be freed manually.


*/


int main(void) {

    int a; // goes on stack
    int *p;
    p = (int *)malloc(sizeof(int)); // goes on heap
    // malloc will return a pointer to the starting address of the allocated memory block
    // by default, it returns a void pointer. We need to cast it.

    // the only way to use the memory on heap is through reference.
    // malloc looks for free space in heap, reserve it, and then returns a pointer to it.
    // you can access this allocated memory through this returned pointer.
    *p = 10;
    printf("%d\n", *p);


    // we need to free the memory that was allocated by malloc.
    free(p);

    int *p2;
    p2 = (int *)malloc(20 * sizeof(int));
    for (int i = 0; i < 20; i++) {
        p2[i] = i;
    }
    for (int i = 0; i < 20; i++) {
        printf("%d\n", *(p2 + i));
    }

    free(p2);

    return 0;
}





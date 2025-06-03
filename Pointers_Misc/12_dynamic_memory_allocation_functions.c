#include <stdio.h>
#include <stdlib.h>

/*
    Allocate a block of memory
    malloc -> void* malloc(size_t size) we cannot dereference a void pointer. It needs to be casted.
    calloc -> void* calloc(size_t num, size_t size)
    realloc -> void* realloc(void* ptr, size_t size)

    Deallocate a block of memory
    free(ptr)
*/


int main(void) {

    // the allocated memory is uninitialized
    int *a = (int*)malloc(20 * sizeof(int));
    for (int i = 0; i < 20; i++) {
        printf("%d\n", a[i]); // you will see some garbage data due to non-initialization
    }

    free(a);

    // the allocated memory is initialized to 0
    int *b = (int*)calloc(20, sizeof(int));
    for (int i = 0; i < 20; i++) {
        printf("%d\n", b[i]);
    }

    int *c = realloc(b, 30 * sizeof(int));

    free(b);
    free(c);


    return 0;
}





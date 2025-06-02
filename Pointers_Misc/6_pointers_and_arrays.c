#include <stdio.h>

/*
    pointers as function arguments - call by reference
*/

int main(void) {

    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    printf("The base address of the array is %p\n", a);
    printf("The base address of the array is %p\n", &a[0]);
    printf("The base address of the array is %p\n", p);

    puts("------------------");

    for (int i = 0; i < 5; i++) {
        printf("Address %p and the value %d\n", (p+i), *(p+i));
    }

    puts("------------------");

    for (int i = 0; i < 5; i++) {
        printf("Address %p and the value %d\n", (a+i), a[i]);
    }
    
    return 0;
}



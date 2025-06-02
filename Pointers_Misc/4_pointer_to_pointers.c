#include <stdio.h>

/*

*/

int main(void) {

    int number = 5;

    int *ptr1 = &number;
    *ptr1 = 10;

    int **ptr2 = &ptr1;
    **ptr2 = 20;

    printf("%d\n", **ptr2);
    printf("%d\n", *ptr1);

    printf("%p\n", ptr2);
    printf("%p\n", &ptr1);

    return 0;
}


#include <stdio.h>

/*
    pointers and one dimensional arrays
*/

int main(void) {

    int a[5] = {2, 4, 6, 8, 10};
    int *b = a;

    // *(a + i) is same as a[i]
    // (a + i) is same as &a[i]

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *b);
        b++;
    }

    puts("-----------------");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(a+i));
    }

    puts("-----------------");

    b = a;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(b+i));
    }

    puts("-----------------");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i] );
    }

    puts("-----------------");

    b = a;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}

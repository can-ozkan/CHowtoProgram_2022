#include <stdio.h>

/*
Write a program that demonstrates  the difference between predecrementing and postdecrementing using the
decrement  operator --
*/

int main(void) {

    int a = 5, b = 5;
    int pre, post;

    // Predecrement: --a means "decrement first, then use"
    pre = --a;
    // Postdecrement: b-- means "use first, then decrement"
    post = b--;

    // Output results
    printf("Initial value: 5\n");
    printf("After predecrement (--a): value used = %d, current a = %d\n", pre, a);
    printf("After postdecrement (b--): value used = %d, current b = %d\n", post, b);

    return 0;
}


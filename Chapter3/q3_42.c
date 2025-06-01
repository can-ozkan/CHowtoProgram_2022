#include <stdio.h>

/*
Fix the statement below
*/

int main(void) {

    int x = 5;
    int y = 6;

    // printf("%d", ++(x + y));
    // This statement is invalid and will result in a compilation error because:

    // The expression (x + y) is not an lvalue (i.e., not a variable or memory location you can modify).

    // The pre-increment operator ++ requires an lvalue (something that can be incremented directly, like a variable).

    ++x;
    printf("%d\n", x + y);

    printf("%d\n", (x + y) + 1);

    return 0;
}

#include <stdio.h>
#include "my_library.h"


int main(void) {

    printf("Hello World\n");

    int x = external_library_add(3,4);
    printf("%d\n", x);

    return 0;
}



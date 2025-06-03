#include <stdio.h>

/*
    Function pointers can be passed as arguments to functions. Then, the function that receives the function
    pointer as argument can call back the function that this pointer points to.
*/

void greet();
void helloToSomeone(void (*ptr)(), char* name);

int main(void) {

    helloToSomeone(greet, "Ozkan");

    return 0;
}

void greet() {
    printf("Hello, ");
}

void helloToSomeone(void (*ptr)(), char* name) {
    ptr(); //callback function that "ptr" points to
    printf("%s\n", name);
}

#include <stdio.h>

/*
    function pointers are also used to store address of functions in addition to pointing to data.
    We can use this pointer to function to dereference and execute the function.
    A program is basically a set of instructions to perform a task.
    Any instruction that has to be executed by a computer has to be encoded in binary.
    Machine codes are instructions encoded in binary.
    The code/text section of a program contains machine code or instructions copied from the executable file.
    Instructions are not executed directly from secondary storage. They are first copied to main memory and then
    executed. During program execution, we need memory not just to store instructions, but also to store data.
    These other segments mostly deal with data.
    Instructions in a program are executed sequentially unless they jump.

    A function is nothing but a set of instructions stored in one contiguous block of memory to perform a sub-task.
    The address of a function, also known as entry point of the function, is the address of the first instruction.
    A function call in machine language is an instruction to jump to entry point (the first instruction) of a function.

*/


int add(int a, int b);
void helloWorld();
void helloToSomeone(char* name);

int main(void) {

    // pointer to function that should take two ints as arguments and return an int
    int (*p) (int, int);
    p = &add; // function name itself returns us pointer, as well.

    int sum = (*p)(10, 20); // dereferencing and executing the function with two arguments
    printf("sum is %d\n", sum);

    void (*ptr)();
    ptr = &helloWorld;
    (*ptr)();

    void (*ptr2)(char*);
    ptr2 = &helloToSomeone;
    (*ptr2)("Ozkan");

    return 0;
}

int add(int a, int b) {
    return a + b;
}

void helloWorld() {
    printf("Hello World!\n");
}

void helloToSomeone(char* name) {
    printf("Hello %s\n", name);
}






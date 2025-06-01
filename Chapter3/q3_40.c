#include <stdio.h>

/*
 *Write a program that keeps printing the  multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on.
 *Your loop should  not terminate (i.e., you should create an infinite loop). What happens when you run  this program?

Once this limit is exceeded, overflow occurs:
The number wraps around (typically back to 0), and you'll start seeing unexpected or incorrect values.
*/

int main(void) {

    unsigned long long number = 2; // use large type to store big values

    while (1) { // Infinite loop
        printf("%llu\n", number);
        number *= 2;
    }

    return 0;
}

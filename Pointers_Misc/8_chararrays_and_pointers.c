#include <stdio.h>
#include <string.h>

/*
    Strings are set or group of characters
    We use char arrays to represent strings
    The char array should be large enough to accommodate a string. Do not forget the null termination
    Strings are expected to be null-terminated.

*/

int main(void) {

    char str[100] = "Hello World";
    int len = strlen(str);
    printf("%d\n", len);
    printf("%d\n", sizeof(str));

    // Arrays and pointers are different types that are used in similar manner

    char *str2 = str;
    printf("%s\n", str2);
    for (int i = 0; i < len; i++) {
        printf("%c ", str[i]);
    }

    // Arrays are always passed to functions by reference

    return 0;
}




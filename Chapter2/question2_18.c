#include <stdio.h>

/*
(Comparing Integers) Write a program that reads two integers from the user
then displays the larger number followed by the words “ is larger .” If the numbers
are equal, display the message “ These numbers are equal .” Use only the single-selec-
tion form of the if statement you learned in this chapter.
*/

int main(void) {

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is larger\n", num1);
    } else if (num1 < num2) {
        printf("%d is smaller\n", num1);
    } else {
        printf("Equal\n");
    }

    return 0;
}

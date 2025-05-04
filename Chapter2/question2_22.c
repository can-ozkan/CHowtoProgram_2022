#include <stdio.h>

/*
(Odd or Even) Write a program that reads an integer and determines and dis-
plays whether it’s odd or even. Use the remainder operator. An even number is a mul-
tiple of two. Any multiple of two leaves a remainder of zero when divided by 2.
*/

int main(void) {

    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    if (a % 2 == 0) {
        printf("Number is even");
    } else {
        printf("Number is odd");
    }

    return 0;
}

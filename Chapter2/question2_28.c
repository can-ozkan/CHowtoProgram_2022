#include <stdio.h>

/*
the formula for calculating your maximum heart rate in beats
per minute is 220 minus your age in years. Your target heart rate is 50–85% of your
maximum heart rate. Write a program that prompts for and inputs the user’s age and
calculates and displays the user’s maximum heart rate and the range of the user’s tar-
get heart rate.
*/

int main(void) {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your heart rate should be around %.2f and %.2f\n", (220-age) / 100.0 * 50,
       (220-age) / 100.0 * 85 ) ;

    return 0;
}

#include <stdio.h>

/*
(Validating User Input) Modify the program in Figure 3.6 to validate its inputs. For each input,
if the value is other than 1 or 2, keep looping until the user enters a correct value.
*/

int main(void) {

    int passes = 0;
    int failures = 0;
    int student = 1;
    // process 10 students using counter-controlled loop
    while (student <= 10) {
        // prompt user for input and obtain value from user
        printf("%s", "Enter result (1=pass,2=fail): ");
        int result = 0; // one exam result
        scanf("%d", &result);
        // if result 1, increment passes
        if (result == 1) {
            passes = passes + 1;
        } // end if
        else if (result == 2){ // otherwise, increment failures
            failures = failures + 1;
        } else {
            printf("Invalid input, try again\n");
            continue;
        }// end else
        student = student + 1; // increment student counter
    } // end while
    // termination phase; display number of passes and failures
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);

    if (passes > 8) {
        puts("Bonus to instructor!");
    }

    return 0;
}

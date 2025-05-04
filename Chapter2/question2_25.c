#include <stdio.h>

/*
(Integer Value of a Character) Here’s a peek ahead. In this chapter, you learned
about integers and the type int . C can also represent uppercase letters, lowercase let-
ters and a considerable variety of special symbols. C uses small integers internally to
represent each different character. The set of characters a computer uses together with
the corresponding integer representations for those characters is called that comput-
er’s character set.
*/

int main(void) {

    printf("%d\n", 'A');
    printf("%d\n", 'B');
    printf("%d\n", 'C');
    printf("%d\n", 'a');
    printf("%d\n", 'b');
    printf("%d\n", 'c');
    printf("%d\n", '0');
    printf("%d\n", '1');
    printf("%d\n", '2');
    printf("%d\n", '$');
    printf("%d\n", '*');
    printf("%d\n", '+');
    printf("%d\n", '/');

    return 0;
}

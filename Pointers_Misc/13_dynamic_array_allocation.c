#include <stdio.h>
#include <stdlib.h>

/*
    dynamic array allocation
*/


int main(void) {

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n]; // normally this should not happen
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // more elegant way is below
    int *p = (int*) malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        *(p+i) = rand() % 100;
        printf("%d = %d\n", i, *(p+i));
    }

    free(p); // after free, adjust pointer to NULL. Otherwise, the data will still be accessible

    return 0;
}





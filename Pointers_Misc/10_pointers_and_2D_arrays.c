#include <stdio.h>

/*
    pointers and two dimensional arrays
    2D arrays are array of an array
    array[2][3] is two one dimensional arrays of 3 integers
    recall that name of an array returns a pointer to the first element in the array
    array[i][j] = *(array[i] + j) = *(*(array + i) + j)
*/
void print2D(int rows, int cols, int arr[][4]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    int b[2][3];

    // int *p = &b[0][0]; or
    int (*p)[3] = b; // declares a pointer to 1D array of 3 integers

    // int *p = b; this returns a compilation error as it returns a pointer to a 1D array of 3 ints

    int arr[3][4] = {  // Example 3x4 array
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };

    int rows = 3, cols = 4;

    printf("Array elements using pointers:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Access element using pointer arithmetic
            // *(*(arr + i) + j) is equivalent to arr[i][j]
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("2D array values:\n");
    print2D(3, 4, arr);
    
    return 0;
}





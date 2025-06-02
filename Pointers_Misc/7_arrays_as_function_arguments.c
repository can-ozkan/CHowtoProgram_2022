#include <stdio.h>

/*
    Arrays as function arguments
*/
int sum_of_elements(int *arr, int size);
void print_array(int *arr, int size);
void doubleElement(int *arr, int size);

int main(void) {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, size);
    printf("Sum is %d\n", sum_of_elements(arr, size));
    puts("--------------------------");

    doubleElement(arr, size);
    print_array(arr, size);
    printf("Sum is %d\n", sum_of_elements(arr, size));


    return 0;
}

int sum_of_elements(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];

    }
    return sum;
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void doubleElement(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}



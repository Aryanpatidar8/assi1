#include <stdio.h>

int sumArray(int arr[], int index, int size) {
    if (index >= size)
        return 0;
    return arr[index] + sumArray(arr, index + 1, size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of array: %d\n", sumArray(arr, 0, size));
    return 0;
}
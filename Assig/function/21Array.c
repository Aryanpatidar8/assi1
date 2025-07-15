#include <stdio.h>

void displayArray(int arr[], int index, int size) {
    if (index >= size)
        return;
    printf("%d ", arr[index]);
    displayArray(arr, index + 1, size);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements: ");
    displayArray(arr, 0, size);
    return 0;
}
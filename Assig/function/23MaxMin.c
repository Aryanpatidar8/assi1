#include <stdio.h>

int maxArray(int arr[], int index, int size) {
    if (index == size - 1)
        return arr[index];
    int max_rest = maxArray(arr, index + 1, size);
    return (arr[index] > max_rest) ? arr[index] : max_rest;
}

int minArray(int arr[], int index, int size) {
    if (index == size - 1)
        return arr[index];
    int min_rest = minArray(arr, index + 1, size);
    return (arr[index] < min_rest) ? arr[index] : min_rest;
}

int main() {
    int arr[] = {3, 5, 1, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum: %d\n", maxArray(arr, 0, size));
    printf("Minimum: %d\n", minArray(arr, 0, size));
    return 0;
}
#include <stdio.h>

int cubeSum(int n) {
    int sum = 0, digit;
    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    printf("Armstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (cubeSum(i) == i)
            printf("%d ", i);
    }
    return 0;
}
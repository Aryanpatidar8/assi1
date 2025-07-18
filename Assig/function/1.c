#include <stdio.h>
void primeFactors(int n, int i) {
    if (n == 1)
        return;
    if (n % i == 0) {
        printf("%d ", i);
        primeFactors(n / i, i);
    } else {
        primeFactors(n, i + 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("\nPrime factors : ");
    primeFactors(n, 2);
    return 0;
}
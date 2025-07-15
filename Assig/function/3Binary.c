#include <stdio.h>

void toBinary(int n) {
    if (n == 0)
        return;
    toBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Binary equivalent: ");
    if (n == 0)
        printf("0");
    else
        toBinary(n);
    return 0;
}
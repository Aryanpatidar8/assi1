#include <stdio.h>
int main() {
    int x, y, result = 1;
    printf("Enter base and exponent: ") ;
    scanf("%d%d", &x, &y);
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    printf("Result of %d^%d = %d\n", x, y, result);
    return 0;
}
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0)
            printf("Cube of %d is %d\n", i, i * i * i);
    }
    return 0;
}
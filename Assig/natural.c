#include <stdio.h>

void nat(int current, int n) {
    if (current > n)
        return;
    
    printf("%d ", current);
    nat(current + 1, n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a valid natural number (> 0)\n");
    } else {
        printf("Natural numbers from 0 to %d:\n", n);
        nat(0, n);  // Start from 1
    }

    return 0;
}

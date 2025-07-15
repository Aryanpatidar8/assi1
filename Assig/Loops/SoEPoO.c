#include <stdio.h>
int main() {
    int num, digit, sum_even = 0, product_odd = 1;
    printf("Enter a six-digit number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 == 0)
            sum_even += digit;
        else
            product_odd *= digit;
        num /= 10;
    }
    printf("Sum of even digits: %d\n", sum_even);
    printf("Product of odd digits: %d\n", product_odd);
    return 0;
}
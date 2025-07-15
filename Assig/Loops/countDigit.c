#include <stdio.h>
int main() {
    int num, digit, count = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter digit to search: ");
    scanf("%d", &digit);
    temp = num;
    while (temp != 0) {
        if (temp % 10 == digit)
            count++;
        temp /= 10;
    }
    if (count > 0)
        printf("Digit %d is present %d time(s).\n", digit, count);
    else
        printf("Digit %d is not present.\n", digit);
    return 0;
}
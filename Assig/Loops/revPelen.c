#include <stdio.h>
int main() {
    int num, rev = 0, temp, org;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    org = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed Number: %d\n", rev);
    if (org == rev)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}
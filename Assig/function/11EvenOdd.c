#include <stdio.h>

void printEvenOdd(int start, int end, int isEven) {
    if (start > end)
        return;
    if (isEven && start % 2 == 0)
        printf("%d ", start);
    else if (!isEven && start % 2 != 0)
        printf("%d ", start);
    printEvenOdd(start + 1, end, isEven);
}

int main() {
    int start, end, choice;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Enter 1 for Even, 0 for Odd: ");
    scanf("%d", &choice);
    printf("Numbers:\n");
    printEvenOdd(start, end, choice);
    return 0;
}
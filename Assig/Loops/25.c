#include <stdio.h>
int main() {
    int i, j, flag;
    printf("Prime numbers from 1 to 300:\n");
    for (i = 2; i <= 300; i++) {
        flag = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
    return 0;
}
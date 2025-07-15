#include <stdio.h>
int main() {
    int hours, overtime;
    for (int i = 1; i <= 10; i++) {
        printf("Enter working hours for employee %d: ", i);
        scanf("%d", &hours);
        if (hours > 40)
            overtime = (hours - 40) * 12;
        else
            overtime = 0;
        printf("Overtime pay  %d\n",overtime);
    }
    return 0;
}
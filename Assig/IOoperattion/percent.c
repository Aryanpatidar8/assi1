#include <stdio.h>
int main() {
    float marks[5], total = 0, percentage;
    printf("Enter marks in 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500) * 100;
    printf("Total Percentage: %.2f\n", percentage);
    return 0;
}
#include <stdio.h>
int main() {
    float principal, rate, time, si;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f%f%f", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", si);
    return 0;
}
#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

double sineSeries(double x, int term) {
    if (fabs(x) < 1e-5)
        return 0;
    if (term == 0)
        return x;
    else
        return pow(-1, term) * pow(x, 2 * term + 1) / factorial(2 * term + 1) + sineSeries(x, term - 1);
}

int main() {
    double x;
    printf("Enter angle in radians: ");
    scanf("%lf", &x);
    double result = sineSeries(x, 5);
    printf("sin(x) using series: %.5lf\n", result);
    return 0;
}
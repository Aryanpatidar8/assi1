#include <stdio.h>
int main() {
    float cost, selling, X;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f%f", &cost, &selling);
    X = selling - cost;
    if (X > 0)
        printf("Profit: %.2f\n", X);
    else if (X < 0)
        printf("Loss: %.2f\n", X);
    else
        printf("No Profit No Loss\n");
    return 0;
}
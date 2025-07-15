#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Without Ternary
    if (a == b)
        printf("Equal\n");
    else
        printf("Different");
    
    // With Ternary
    printf("Using Ternary: %d\n", (a == b) ? printf("equal") : printf("different"));
    return 0;
}
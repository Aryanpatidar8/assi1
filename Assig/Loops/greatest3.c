#include <stdio.h>
int main() {
    int R, S, A;
    printf("Enter ages of R, S and A: ");
    scanf("%d%d%d", &R, &S, &A);
    if (R <= S && R <= A)
        printf("R is youngest.\n");
    else if (S <= R && S <= A)
        printf("Shyam is youngest.\n");
    else
        printf("Ajay is youngest.\n");
    return 0;
}
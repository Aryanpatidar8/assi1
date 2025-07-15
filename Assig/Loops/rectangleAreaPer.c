#include <stdio.h>
int main() {
    int l, b, area, perimeter;
    printf("Enter length and breath of rectangle: ");
    scanf("%d%d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    if (area > perimeter)
        printf("Area is greater than Perimeter.\n");
    else
        printf("Perimeter is greater than  Area.\n");
    return 0;
}
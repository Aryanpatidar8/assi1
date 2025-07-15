#include <stdio.h>
int main() {
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of the triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180)
        printf("Triangle is valid.\n");
    else
        printf("Triangle is not valid.\n");
    return 0;
}
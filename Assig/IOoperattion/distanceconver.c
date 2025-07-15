#include <stdio.h>
int main() {
    float km;
    int c;
    printf("Enter distance between two cities (in km): ");
    scanf("%f", &km);
    printf("Type 1 for meters,Type 2 for feet,3 for inches,4 for centimeters: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Distance in meters: %.2f m\n", km * 1000);
        break;
    case 2:
        printf("Distance in feet: %.2f ft\n", km * 3280.84);
        break;
    case 3:
        printf("Distance in inches: %.2f in\n", km * 39370.1);
        break;
    case 4:
        printf("Distance in centimeters: %.2f cm\n", km * 100000);
        break;
    default:
        printf("Enter correct no.");
        break;
    }
    return 0;
}
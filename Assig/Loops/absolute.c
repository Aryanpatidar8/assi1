#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,num;
    printf("Enter two nagative number: ");
    scanf("%i %i", &n, &num);
    n=(n < 0) ? -n : n;
    printf("Absolute value is: %d\n", n);
    //use lib
    num=abs(num);
    printf("Absolute value is: %d",num);
    return 0;
}
#include<stdio.h>
int main(){
    int n, i, j, count = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int binary[32]; 
    while (n > 0) {
        binary[count] = n % 2; 
        n = n / 2;
        count++;
    }
    printf("Binary representation: ");
    for (i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    
    printf("\n");
    int num = n;
    int onesCount = 0;
    while (num > 0) {
        onesCount += num & 1; 
        num >>= 1; 
    }
    printf("Number of 1's in binary representation: %d\n", onesCount);
    int zerosCount = count - onesCount;


    return 0;
}
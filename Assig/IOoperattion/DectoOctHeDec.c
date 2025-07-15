#include <stdio.h>
int main() {
    int num,oct[10],i=0,j;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num != 0) {
        oct[i++]=num % 8;
        num = num / 10;
    }
    for(j=i-1; j>=0;j--){
    printf("%d",oct[j] );
    }

    return 0;
}
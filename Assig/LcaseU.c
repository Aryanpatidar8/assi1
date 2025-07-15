#include<stdio.h>
char convertToUpperCase(int c) {
    int a=97,b=122;
   if(c >=a && c <=b){
    c = c-32;
   }
    else {
         printf("Please enter a valid lower case character.\n");
         return 0;
    }
   printf("Upper case character: %c\n", c);
   return 0;
    }

int main() {
    char c;
    printf("Enter a character in lower case: ");
    scanf("%c",&c);
    convertToUpperCase(c);
    return 0;
}
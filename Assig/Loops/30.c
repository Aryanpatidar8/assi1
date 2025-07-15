#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",n);
    for(i=65;i<=90;i++){
        for(j=65;j<=i;j++){
            printf("%c",j);

        }
        printf("\n");
    }
}
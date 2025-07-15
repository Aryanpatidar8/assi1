#include <stdio.h>
// sin(x) = x − (x 3 / 3!) + (x 5 / 5!) − (x 7 / 7!)
float expression(int a,int n)
{   
    float sin;
    if(a<=9){
    sin = ((n*a)/(fact(a)))+expression(a+2,n);
}
return sin;
}
int fact(int a){
    int f=1;
    while(a>0){
        f=a*f;
        a--;
    }
    return f;
}
int main()
{
    int x;
    printf("Enter the value of X: ");
    scanf("%d", x);
    //expression(x);
    printf("result is :%f",expression(1,x));
}
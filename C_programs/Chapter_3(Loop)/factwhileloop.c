#include<stdio.h>

int main(){
    int n = 10;
    int fact = 1;
    int i = 1;
    while(i<=n)
    {
        fact *= i;
        i++;
    }
    printf(" The factorial of %d is %d",n,fact);
     return 0;
}
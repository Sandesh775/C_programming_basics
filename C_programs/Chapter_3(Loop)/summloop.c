#include<stdio.h>

int main(){
    int n = 2 ;
    int sum = 0;
    for ( int i = 1; i < 11; i++){
        printf("%d X %d = %d\n",n, i, n*i);
        sum += n*i;
    }
    printf(" The value of sum of multiples upto 10 is %d\n",sum);
     return 0;
}
#include<stdio.h>
void function ( int *);
int main(){
    int d = 67;
    printf(" The value of d is %d\n",d);
    function (&d);
     return 0;
}
void function (int *x){
    printf(" The address of d is %d\n",x);
}
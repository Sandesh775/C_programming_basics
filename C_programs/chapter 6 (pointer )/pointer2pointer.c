#include<stdio.h>

int main(){
    int a = 69;
    int * b = &a;
    int ** c = &b;
    printf(" The value of a is %d\n",a);
    printf(" The value of a using *b is %d\n",*b);
    printf(" The value of a using **c is %d\n",**c);
     return 0;
}
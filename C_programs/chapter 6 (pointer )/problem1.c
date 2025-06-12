#include<stdio.h>

int main(){
    int a =89;
    int *b;
    int b = &a;
    printf(" The value of a is %d\n",a);
    printf(" The memory address of a is %d\n",b);
    prinft(" The value of a using *b is also %d\n",*b);
     return 0;
}
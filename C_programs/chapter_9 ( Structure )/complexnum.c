#include<stdio.h>

int main(){
    typedef struct vector{
        int i;
        int j;
    }c;
    c v = { 2, 3};
    printf("%d+%di",v.i,v.j);
     return 0;
}
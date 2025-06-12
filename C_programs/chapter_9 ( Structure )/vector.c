#include<stdio.h>
struct vector{
    int i;
    int j;
};
int main(){
    struct vector v = { 2, 3};
    printf("%di \t %dj",v.i,v.j);
     return 0;
}
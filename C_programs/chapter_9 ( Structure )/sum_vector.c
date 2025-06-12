#include<stdio.h>
struct vector{
    int i;
    int j;
};
struct vector sum_vector(struct vector v,struct vector v1){
    struct vector v3;
    v3.i = v.i + v1.i;
    v3.j = v.j + v1.j;
    return v3;
};// before function struct is mention means we are passing return value in structure 
int main(){
    struct vector v = { 2, 3};
    struct vector v1 = { 4, 5};
    struct vector v2 = sum_vector(v,v1);
    printf("%di \t %dj",v2.i,v2.j);
     return 0;
}
/*
#include <stdio.h>

struct vector {
    int i;
    int j;
};

void sum_and_print_vector(struct vector v, struct vector v1, struct vector result) {
    result.i = v.i + v1.i;
    result.j = v.j + v1.j;
    printf("Sum: %di \t %dj\n", result.i, result.j);
}

int main() {
    struct vector v = {2, 3};
    struct vector v1 = {4, 5};
    struct vector v3; // Declared in main

    sum_and_print_vector(v, v1, v3); // Pass v3 to the function

    // v3 in main will NOT be modified in this case
    printf("v3 in main: %di \t %dj\n", v3.i, v3.j); // Will print uninitialized values

    return 0;
}
*/
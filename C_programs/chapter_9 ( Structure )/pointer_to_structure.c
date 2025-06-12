#include<stdio.h>
struct employee {
    int code;
    char name[10];
    float salary;
};
int main(){
    struct employee e1;
    e1.code = 100;
    struct employee *ptr;
    ptr = &e1;
    printf("%d",(*ptr).code); // using arrow operator ptr->code
     return 0;
}
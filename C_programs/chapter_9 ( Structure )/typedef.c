#include<stdio.h>
#include<stdio.h>
typedef struct employee {
    int id;
    char name[10];
    float salary;
}emp;
int main(){
    emp e1;
    e1.id = 101;
    strcpy(e1.name , "Sandesh");
    e1.salary = 50000;
    printf(" %d\t %s\t %f",e1.id,e1.name,e1.salary);
     return 0;
}
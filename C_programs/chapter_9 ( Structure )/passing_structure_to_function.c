#include<stdio.h>
#include<string.h>
struct employee {
    int id;
    char name[10];
    float salary;
};
void show (struct employee e1){
    printf(" id =%d\t Name = %s \t salary = %f",e1.id,e1.name,e1.salary);
}
int main(){
    struct employee e1;
    e1.id = 101;
    strcpy(e1.name, "Sandesh");
    e1.salary = 50000;
    show(e1);
     return 0;
}
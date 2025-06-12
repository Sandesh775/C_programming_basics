#include<stdio.h>
#include<stdio.h>
struct structure_name {
    int employee_id;
    char name[10];
    float salary;
};
int main(){
    struct structure_name s1;
    s1.employee_id = 001;
    strcpy(s1.name[10], "Sandesh");
    s1.salary = 45000;
    printf("%d \t %s \t %f",s1.employee_id,s1.name,s1.salary);
     return 0;
}
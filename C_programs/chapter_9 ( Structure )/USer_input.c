#include<stdio.h>
#include<stdio.h>
struct structure_name {
    int employee_id;
    char name[10];
    float salary;
}e[3]; // declaration of both structure and structure variables
int main(){
    // alternative for declaration of array of structure :
    // struct structure_name array[50]; 
    // for input 
    for (int i = 0; i < 3; i++)
    {
       printf(" Enter the id, name and salary of no.%d employee :\n",i+1);
       scanf("%d%s%f",&e[i+1].employee_id,e[i+1].name,&e[i+1].salary);
    }
    // for output 
    printf("id\tname\tsalary\n");
    for ( int i = 0; i < 3; i++){
        printf("%d \t %s \t %f\n",e[i+1].employee_id,e[i+1].name,e[i+1].salary);
    }
     return 0;
}
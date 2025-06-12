#include<stdio.h>
struct emp{
    char w[50];
    float salary;
}e[2];
int main(){
    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    for (int  i = 0; i < 2; i++)
    {
        printf(" Enter the Name and salaray of %d employee :\n",i+1);
        scanf("%s%f",e[i].w,&e[i].salary);
        fprintf(ptr,"%s, %f\n",e[i].w,e[i].salary);
    }
    fclose(ptr);
     return 0;
}
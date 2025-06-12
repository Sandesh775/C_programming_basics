#include<stdio.h>

int main(){
    int marks [5];// int marks [5] ={45, 56,78,90,99};
    // float gpa [] = { 56.6, 99, 67.5};
    printf(" Enter the marks of 5 students :\n");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);

    }
    for (int  i = 0; i < 5; i++)
    {
        printf(" The value of marks at index %d is : %d\n",i,marks[i]);
    }
    
    
     return 0;
}
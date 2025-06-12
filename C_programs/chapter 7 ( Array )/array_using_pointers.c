#include<stdio.h>

int main(){
    int marks[] = {45, 67, 89, 90, 32};
    int *ptr;
    ptr = &marks[0];// equivalent to int *ptr = marks ; assign the first element address 
    printf(" The memory address of index 0 is %u\n",ptr);
    printf(" MArks at index 0 is %d\n",*ptr);
    for (int i = 1; i < 5; i++)
    {
        printf(" The memory addres of inderx %d is %u\n",i,++ptr);
        printf(" Marks at index %d is %d\n",i,*ptr);
    }

     return 0;
}
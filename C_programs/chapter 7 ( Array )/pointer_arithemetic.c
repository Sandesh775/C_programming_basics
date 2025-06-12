#include<stdio.h>

int main(){
    /*int a =9;
    int *ptr = &a;
    printf(" The memory address of a is %u\n",ptr);
    ptr++;
    printf(" Memory address after increment is %u\n",ptr);*/
    // %U memory size in integer form 
    // here size will be increse according to the architecture of data type 
    // integer occupy 4bytes 
    char letter = 'B';
    int *ptr = &letter;
    printf(" The memory address of a is %u\n",ptr);
    ptr++;
    printf(" Memory address after increment is %u\n",ptr);
     return 0;
}
#include<stdio.h>

int main(){
    int a = 73;
    printf(" The value of variable a is %d\n",a);
    printf(" The address of the variable a where the value 73 is stored is %p\n",&a);
    // &a refers to the memory address or memory location of a variable
    // %p is the format specifier for the pointer 
    int * b = &a; // b is a pointer that stores the address of variable a
    printf("The address stored in pointer b is %p\n",b);
    // we can see the value of pointer b is equals to address of a ie &a 
    printf(" The value stored at address is %d\n", *b);
    // *b retrieves the value stored at the address held by pointer b 
    // note *b = *(&a)
    // note *(&b) = memory address of variable a
     return 0;
}
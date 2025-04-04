#include<stdio.h>
int main(){
    int a;
    printf(" Enter the value of a as a integer value : \n");// first of all asking user for entering integer value
    scanf("%d", &a);// assigning the entered value with the variable address which I have already created
    printf(" The input value  enter by user is %d\n",a);// Now showing the value as a = 1
    printf(" iT can also look like a = %d ",a);
    return 0;
    // \n is escape sequence for new line
}
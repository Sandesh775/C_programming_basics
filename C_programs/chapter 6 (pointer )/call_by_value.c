#include<stdio.h>
void swap(int , int);
int main(){
    int a = 46,  b = 80;
    printf("Before function calling:\n");
    printf("The value of a = %d, and b = %d\n\n", a, b);


    swap(a,b);// call by value demonstration
    printf("\nAfter function call done!\n");
    printf("The value of a = %d, and b = %d (Notice: No change!)\n", a, b);

    
     return 0;
}
void swap( int x, int y){
    int temp;
    temp = x;
    x =y;
    y = temp;
    printf("Inside swap function (after swapping):\n");
    printf("The value of x = %d, and y = %d\n", x, y);
}
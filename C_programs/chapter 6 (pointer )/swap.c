#include<stdio.h>
void swap ( int *, int *);
int main(){
    int a = 34, b = 7;
    swap ( &a, &b);
    printf("After swapping !\n");
    printf(" Value of a = %d, and b = %d\n",a,b);
     return 0;
}
void swap ( int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
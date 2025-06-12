#include<stdio.h>
int swap(int *, int *);// function takes pass argument by address
int main(){
    int a = 34, b =56;
    printf(" The value of a before calling function : %d & b is = %d\n",a,b);
    swap (&a, &b);
    printf(" After calling function :\n");
    printf(" a = %d, b = %d",a,b);
     return 0;
}
int swap(int *x, int *y){
    int temp ;
    temp = *x;
     *x = *y;
     *y = temp;
    printf(" Within function !\n");
    printf(" The value of a is %d, and b is %d\n",*x,*y);
    return 0;
}
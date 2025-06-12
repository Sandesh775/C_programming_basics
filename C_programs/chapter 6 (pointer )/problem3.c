#include<stdio.h>
void double_10( int *x){
    *x = *x * 10; 
}
int main(){
    int a = 5;
    printf("The value of a is %d\n",a);
    double_10(&a);
    printf(" The returned value of a is %d\n",a);
     return 0;
}
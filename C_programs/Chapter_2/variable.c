#include<stdio.h>
int main(){
    int i = 10;
    int j = i ;
    int a = 3, b = 5;
    float d = 4.5;
    float c = a+ 2*b + (d/2);// can use previously defined variables as value 
    printf(" The value of c is %f",c);
    printf("\n");
    printf(" The value of i is %d, and j is %d",i,j);
    return 0;

}
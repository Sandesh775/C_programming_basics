#include<stdio.h>

int main(){
    
    float m = 34.567;

    int n = (int) m; // now n's values will be replace to integer form of 34.576
    printf("n = %d\n",n);
    printf("m = %f",m);// but the value assigned to m initially will remain same in floating value
     return 0;
}
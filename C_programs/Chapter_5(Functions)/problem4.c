#include<stdio.h>
int fibonacci ( int n){
    if ( n==1 || n==2){
        return n-1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int a= 3;
    printf(" The value of fibonacci series at %d th term is %d\n",a,fibonacci(a));
     return 0;
}
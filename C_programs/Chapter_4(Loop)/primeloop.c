#include<stdio.h>

int main(){
    int num = 8;
    int prime = 0;
    for ( int i = 2; i < num ; i++){
        if(num%i == 0 && num !=2 ){
            prime = 1;
            break;
        }
    }
    if(prime){
        printf(" Number is  not prime !");
    }
    else
     printf( " Number is  prime ! ");
     return 0;
}



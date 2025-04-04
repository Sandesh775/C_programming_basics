#include<stdio.h>
int factorial ( n );
int factorial ( a ){
    if ( a == 1 || a == 0){
        return 1;
    }
    else {
        return a * factorial (a-1);
    }
}
int main(){
    int num;
    printf(" Enter a positive number : \n");
    scanf("%d",&num);
    printf(" THe factorial is %d ", factorial( num));

    
     return 0;
}
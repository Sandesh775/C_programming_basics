#include<stdio.h>

int main(){
    /*int n = 12;
    for ( int i = 0 ; i < n; i --){    
        if( i == 5){
        break;
    }
    printf("i = %d\n",i);   // infinite loop cause i goes decreasing through negative axix
}*/
    int n = 12;
    for ( int i = 1; i <= n ; i ++){
        if ( i == 5){
            break;
        }
        printf("n = %d\n",i);
    }
    printf(" Loop is done !");
     return 0;
}
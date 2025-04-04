#include<stdio.h>

int main(){
    for ( int i = 0; i < 15; i++){
        if(i == 5){
            break ;// break the loop now !, 
           // continue ; // skip the iteration means don't need to execute this iteration loop part work !
        }
        printf( " THe value of i = %d\n",i);

    }
    printf(" Loop is done now !");
     return 0;
}
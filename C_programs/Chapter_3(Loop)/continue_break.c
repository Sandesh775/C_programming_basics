#include<stdio.h>

int main(){
    int n = 15;
    for ( int i = 1; i < 10; i++){
        if( i == 4){
            continue; 
            //break ; exit the loop ! 
        }
        else if ( i == 5){
            continue;
        }
        else if ( i == 3){
            continue;
        }
        printf( " i = %d\n",i);
    }
    
     return 0;
}
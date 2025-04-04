#include<stdio.h>

int main(){
    int a, b ,c ;
    printf(" Enter any three positive numbers \n:");
    scanf("%d%d%d",&a,&b,&c);
    if ( a > b){
        if ( a > c ){
            printf(" %d is greater value !",a);
            
        }
        else {
                printf(" %d is greater value !",c);
            }       
    }
    else if ( b > c){
            printf(" %d is grater value !",b);
        }
    else {
            printf(" %d is greater value !",c);
        }
     return 0;
}
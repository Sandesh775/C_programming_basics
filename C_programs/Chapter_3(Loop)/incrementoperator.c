#include<stdio.h>

int main(){
    int i = 5;
    i = i + 5; // 10
    printf(" The value of i = %d",i);
    // again
    i++;//11
    // if do ++i; then also it will be 11, but it doesn't mean both are true 
    // here ++i; worked because it increment first then prints !
    printf(" The value of i = %d",i);

     return 0;
}
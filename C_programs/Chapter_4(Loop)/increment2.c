#include<stdio.h>

int main(){
    int i = 0;
    printf(" The value of i = %d\n",i++); // notice that i have add increment operator with printf() i = 0; 
    // will print previously assigned or stored / increment value
    printf("value of i after after incremnt in first print function is %d",i);
    // where we can understand in before print function it shows us the previously assigned value ,
    // but after that it has been updated as increment in value i = 1 ok !
     return 0;
}
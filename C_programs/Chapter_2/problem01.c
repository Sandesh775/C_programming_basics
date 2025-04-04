#include<stdio.h>

int main(){
    int n;
    printf(" Enter number but not in decimal !:\n");
    scanf(" %d",&n);
    int result = (int) n % 97;
    printf(" You got the answer %d, if it is zero then obviously it is divisible by 97 but 3 if not it is not !",result);
    
     return 0;
}
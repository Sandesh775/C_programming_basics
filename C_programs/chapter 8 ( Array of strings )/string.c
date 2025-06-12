#include<stdio.h>

int main(){
    //char s[] = {'A','B','C','\0'};
    char s[] = "ABC";
    //char s[4] = "ABC";
    // use for loop for printing string 
    for (int i = 0; i < 4; i++)
    {
        printf("character is %c\n",s[i]);
        //printf("character is %c",s[i]);
    }
    
     return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
    char str1[20] = "sandesh";
    char  str2[20] = " hello";
    strcat(str1, str2);
    printf(" Combined word is %s",str1);
     return 0;
}
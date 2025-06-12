#include<stdio.h>
int strlen( char str[]){
    int i = 0, count;
    char c = str[i];
    while(c!='\0'){
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
}
int main(){
    char string[] = "sandesh";
    printf(" The length of word using userdefine function is %d\n",strlen(string));
     return 0;
}
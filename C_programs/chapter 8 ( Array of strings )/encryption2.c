#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf(" Enter word or sentence you want to encrypt :\n");
    scanf(" %[^\n]",str); // Note the space before %[^\n] to consume leading whitespace
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf(" Encrypt word is %s\n",str);
    
     return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf(" Enter word or sentence you want to encrypt :\n");
    scanf(" %[^\n]",str1); // Note the space before %[^\n] to consume leading whitespace
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = str1[i] + 1;
    }
    printf(" Encrypt word is %s\n",str1);
    // now decrypt
    // but enter that encrypted word 
    printf(" Now enter that above encrypted word here to see it decryption:\n");
    scanf(" %[^\n]",str2);
    for (int i = 0; i < strlen(str2); i++)
    {
        str2[i] = str2[i] - 1;
    }
    printf(" The decrypt word is %s",str2);
     return 0;
}
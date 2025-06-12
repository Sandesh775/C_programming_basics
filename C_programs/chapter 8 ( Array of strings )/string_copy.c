#include<stdio.h>
#include<string.h>

int main(){
    char original[20];
    char  copied[20];
    printf(" Enter word :\n");
    scanf("%[^\n]",original);
    strcpy(copied, original);
    printf(" Copied word is %s",copied);

     return 0;
}
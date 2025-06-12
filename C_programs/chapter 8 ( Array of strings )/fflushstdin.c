#include<stdio.h>

int main(){
    char string[8];
    for (int i = 0; i < 7; i++)
    {
        scanf(" %c", &string[i]); // Note the space before %c to skip any leading whitespace/newline scanf("%c",&string[i]);
        //fflush(stdin);
    }
    string[7] = '\0';
    printf(" The word is %s",string);
     return 0;
}
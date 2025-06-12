#include<stdio.h>

int main(){
    char c;
    FILE *ptr;
    ptr = fopen("Sandesh.txt","r");
    while (1)
    {
        c = fgetc(ptr);
        printf("%c",c);
        if(c == EOF){
            break;
        }
    }
    fclose(ptr);
     return 0;
}
#include<stdio.h>
// reading from file 
int main(){
    FILE *ptr;
    ptr = fopen("file_name2.txt", "r");
    char c = fgetc(ptr);
    printf("Read first character is %c",c);
    fclose(ptr);
     return 0;
}
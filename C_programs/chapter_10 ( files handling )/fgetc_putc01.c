#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("file_name3.txt", "a");
    putc('w',ptr);
    fclose(ptr);
     return 0;
}
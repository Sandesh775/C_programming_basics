#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("file_name.txt", "a");
    char a[] = "Sandesh";
    fprintf(ptr, "%s",a);
    printf("Text is %s",a);
    fclose(ptr);
     return 0;
}
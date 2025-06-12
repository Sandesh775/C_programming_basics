#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("value.txt", "r");
    fscanf(ptr, "%d",&num);
    num = 2*num;
    fclose(ptr);
    ptr = fopen("value.txt", "w");
    fprintf(ptr, "%d",num);
    fclose(ptr);
     return 0;
}
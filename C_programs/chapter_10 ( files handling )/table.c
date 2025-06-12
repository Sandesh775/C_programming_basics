#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("File505.txt","w");
    int num = 5;
    for (int i = 0; i < 11; i++)
    {
        fprintf(ptr,"%d\n",num*(i+1));
    }
    fclose(ptr);
     return 0;
}
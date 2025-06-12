#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    if(ptr = NULL){
        printf(" The file doesn't exist !");
    }
    else{
    ptr = fopen("number.txt", "r");
    fscanf(ptr,"%d",&num);
    printf(" Number read from file is %d\n",num);
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    fclose(ptr); // Always close the file
    }
     return 0;
}
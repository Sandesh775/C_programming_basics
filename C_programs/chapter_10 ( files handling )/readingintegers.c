#include<stdio.h>

int main(){
    FILE *ptr;
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    else{    
    ptr = fopen("file101.txt","r");
    int num1, num2, num3;
    fscanf(ptr,"%d%d%d",&num1,&num2,&num3);
    printf("%d\t%d\t%d",num1,num2,num3);
     return 0;
     fclose(ptr);
    }
}
#include<stdio.h>

int main(){
    char c;
    FILE *ptr, *ptr2;
    ptr = fopen("Sandesh.txt","r");
    ptr2 = fopen("Newfile.txt","w");
    while (1)
    {
        c = fgetc(ptr);
        if(c == EOF){
            break;
        }
        else{
            
            fprintf(ptr2, "%c", c);
        }
    }

    fclose(ptr);
    fclose(ptr2);
    
     return 0;
}
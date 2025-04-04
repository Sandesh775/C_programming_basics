#include<stdio.h>

int main(){
    char a;
    printf(" Enter a word either starting lowercase or uppercase :\n");
    scanf("%c",&a);
    if (a>=65 && a<=90){
        printf(" Word is in uppercase !");
    }
    else if ( 97>=a && 122>=a) {
        printf(" The word letter starting with lowercase !!");
    }
    else {
        printf(" It is not any of the alphabet ! bitch");
    }
     return 0;
}
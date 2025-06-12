#include<stdio.h>

int main(){
    int marks[5];
    printf(" Enter the marks of the 5 student :\n");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);
    printf(" Marks of first and last student is %d and %d\n",marks[0],marks[4]);
     return 0;
}
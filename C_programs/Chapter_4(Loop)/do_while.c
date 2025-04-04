#include<stdio.h>

int main(){
    int i, j = 1;
    printf(" Enter natural number :");
    scanf("%d",&i);
    printf("Natural number upto %d\n",i);
    do
    {
        printf("%d\n",j);
        j++;
    } while (j<=i);
    
     return 0;
}
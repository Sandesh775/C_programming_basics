#include<stdio.h>

int main(){
    int n;
    printf(" Enter the natural number :\n");
    scanf("%d",&n);
    printf(" natural number upto %d\n",n);
    for(int i =1; i <= n; i++)
    {
        printf("%d\n",i);
    }
     return 0;
}
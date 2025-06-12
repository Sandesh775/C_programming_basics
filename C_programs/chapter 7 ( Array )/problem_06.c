#include<stdio.h>

int main(){
    int num;
    int upto;
    printf(" Enter a number of which you want the multiplication : \n");
    scanf("%d",&num);
    printf(" Upto ? :\n");
    scanf("%d",&upto);
    printf(" Printing the table \n");
    for (int i = 0; i < upto; i++)
    {
            printf("%d * %d = %d\n",num,i+1,num*(i+1));            
    }
     return 0;
}
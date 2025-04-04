#include<stdio.h>

int main(){
    int a,b,c,d;
    printf(" Enter four integer values :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b && a>c && a>d){
        printf(" the integer value of a is greater : %d",a);
    }
    else if (b>a && b>c && b>d){
        printf(" the integer value of b is greater : %d",b);
    }
    else if (c>a && c>b && c>d){
        printf(" the integer value of c is greater : %d",c);
    }
    else {
        printf(" the integer value of d is greater : %d",d);
    }
     return 0;
}
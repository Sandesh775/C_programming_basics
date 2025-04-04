/* . Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/
#include<stdio.h>

int main(){
    int a, b, c;
    printf(" Enter the marks of three subject : ");
    scanf("%d%d%d",&a,&b,&c);
    float per;
    float total;
    total = ( a+b+c);
    per = (total/300.0)*100.0;
    if ( per >= 40)
        printf(" YOu have pass");
    else 
       printf(" YOu are fail ");



    if (a>=33){
        if ( b>=33){
            if ( c>=33){
                printf(" YOu have pass");
            }
            else 
            printf(" YOu have fail");
        }
        else 
        printf(" YOu have fail");
    }
    else 
    printf(" YOu have fail");
     return 0;
}
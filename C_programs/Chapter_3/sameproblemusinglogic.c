#include<stdio.h>
int main(){
    int m1, m2, m3;
    printf("Enter the marks1 :");
    scanf("%d",&m1);
    printf("Enter the marks2 :");
    scanf("%d",&m2);
    printf("Enter the marks3 :");
    scanf("%d",&m3);
    if ( m1 < 33 || m2 < 33 || m3 < 33){
        printf(" YOu are failed due to less marks in one of the subject ");
    }
    else if ( (m1+m2+m3)/3<40){
        printf(" YOu are fILED due to less percentage !");
    }
    else 
    printf(" YOu have passed ! this shit");
     return 0;
}
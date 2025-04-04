/* Write a program that read total marks of a student in seven subjects, then calculate the percentage and determine the division.
Use the following conditions
percentage greater than or equal to 80 > distinction
percenage between 60 and 79 > first division
percentage between 45 and 59 > second division
percentage between 32 and 44 > third division 
percentage less than or equal to 31 > fail*/
#include<stdio.h>

int main(){
    float a,b,c,d,e,f,g;
    float total, percentage;
    printf(" Enter the marks of english :\n");
    scanf("%f",&a);
    printf(" Enter the marks of math :\n");
    scanf("%f",&b);
    printf(" Enter the marks of physics :\n");
    scanf("%f",&c);
    printf(" Enter the marks of computer :\n");
    scanf("%f",&d);
    printf(" Enter the marks of nepali :\n");
    scanf("%f",&e);
    printf(" Enter the marks of chemistry :\n");
    scanf("%f",&f);
    printf(" Enter the marks of social :\n");
    scanf("%f",&g);
    total = ( a+b+c+d+e+f+g);
    percentage = ( total/100.0)*7.0;

        if (percentage >= 80){
                printf(" IT is disctinction");
        }

        else if (percentage >=60 && percentage <80 ){
            printf(" It is first division");
        }
        else if (percentage >= 45 && percentage <60){
                printf(" It is second division");
        }
        else if (percentage >= 32 && percentage < 45){
                printf(" It is third division");
        }
        else {
            printf(" It is fail");
        }
     return 0;
}
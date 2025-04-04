#include<stdio.h>

int main(){
    int income;
    double tax = 0.0;
    printf( " Enter the amount of your monthly income :\n");
    scanf("%d",&income);
     if ( income > 1000000){
        tax = (500000.0-250000.0)*0.05+(1000000.0-500000.0)*0.2+(income-1000000.0)*0.3;
     }
     else if ( income >= 500000){
        tax = (500000.0-250000.0)*0.05+(income-500000.0)*0.2;
     }
     else if ( income >= 250000){
        tax = (income-250000.0)*0.05;
     }
     else {
         printf(" Below 250000 there no charge system thank you !\n");
     }
       printf("Tax charge is %.2f\n",tax );    
    return 0;
     }
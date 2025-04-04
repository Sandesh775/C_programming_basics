#include<stdio.h>
float converter ( float a){
    return  (a * ( 9.0/5.0))+ 32.0;
}
int main(){
    float c;
    printf(" enter the celcius :\n");
    scanf("%f",&c);
    printf(" Celsius into Fahrenheit is: %.2f\n",converter(c));
     return 0;
}
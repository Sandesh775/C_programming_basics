#include<stdio.h>
float average ( int a, int b , int c){
    float value = ( a + b + c )/3.0;
    return value;
}
int main(){
    int x = 5, y = 7, z = 5;
    printf(" The average of three numbers is %.2f\n",average(x,y,z));
     return 0;
}
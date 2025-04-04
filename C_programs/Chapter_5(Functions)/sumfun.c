#include<stdio.h>
// Program written by sandesh chapagain
    // function prototype
    int sum ( int, int); // int before sum function is considering the return value which is integer
    // where inside sum function ( int, int) rpepresnt the agrument passing to finction which is also integer value
    int sum ( int a, int b){
         printf(" the sum is %d\n", a+b);
         return a + b;
    }
    diff ( int , int );
    diff( int a, int z ){
        a - z;
    }
     int main(){
        int x = 32;
        int y = 56;

        sum ( x, y); // recalling sum function passing our integer variables
        int z = sum ( 58 , 98); // storing the return value into variable "Z"
        printf(" The sum of 58 + 98 is %d\n", z);

        int q = diff ( 300, 119);
        printf(" The difference is %d\n",q);
        return 0;
     }
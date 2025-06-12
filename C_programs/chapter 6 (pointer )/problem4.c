#include<stdio.h>
int sum ( int , int );
float average ( int, int );
int main(){
    int a = 56, b = 67;
    int sum_value ;
    float avg_value ;
    printf("a = %d, b = %d\n",a,b);
    sum_value = sum ( a,b);
    avg_value = average(a, b);
    printf( " The sum of a and b is %d\n",sum_value);
    printf(" The average of a & b is %.2f\n",avg_value);
     return 0;
}
int sum ( int x, int y){
    return x + y;
}
float average ( int c, int d ){
    return ( c + d)/2.0;
}
/* alternative !!
#include<stdio.h>

void sum(int, int);
void average(int, int);

int main(){
    int a = 56, b = 67;

    printf("a = %d, b = %d\n", a, b);

    sum(a, b);
    average(a, b);

    return 0;
}

void sum(int x, int y){
    printf("The sum of a and b is %d\n", x + y);
}

void average(int c, int d){
    printf("The average of a & b is %.2f\n", (c + d) / 2.0);
}

*/
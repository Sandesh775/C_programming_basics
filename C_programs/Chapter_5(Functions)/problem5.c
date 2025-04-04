#include<stdio.h>
int sumrecursive(int);
int main(){
    int a = 5;
    printf("The sum of natural number upto %d th term is %d\n",a,sumrecursive(a));
     return 0;
}
int sumrecursive(int x){
     if ( x == 1){
          return 1;
     }
     else{
          return x + sumrecursive(x-1);
     }
}
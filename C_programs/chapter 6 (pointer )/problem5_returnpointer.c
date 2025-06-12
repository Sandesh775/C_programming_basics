#include<stdio.h>
/*
int s;       // Global
float ag;    // Global
*/
int * sum ( int a, int b){
    int s = a + b; int *pt;
    pt = &s;
    printf(" The sum is %d\n",s);
    return pt;
    
}
float *  avg ( int x, int y){
    float ag = (x+y)/2.0; float *pt1;
    pt1 = &ag;
    printf(" The average is %.2f\n",ag);
    return &ag;
}
int main(){
    int p = 89;
    int q = 90;
    int *ptr1 = sum ( p, q);
    float *ptr2 = avg ( p, q);
    printf(" The address of the sum is %u\n",ptr1);
    printf(" THE address of average is %u\n",ptr2); 
    
     return 0;
}
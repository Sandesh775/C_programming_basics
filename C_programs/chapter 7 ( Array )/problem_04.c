#include<stdio.h>
int counts(int a[], int b)
{
    int count = 0;
    for (int i = 0; i < b; i++)
    {
        if ( a[i]== 0 || a[i]<0){
           // Do nothing — this block is intentionally left empty 
        }
        else{
            printf(" %d\n",a[i]);
            count ++;
        } 
        
}
    return count;
}
int main(){
    int arr [] = { 90,80,-90, 45, 0};
    printf(" Total positive numbers are %d\n",counts(arr, 5));
     return 0;
}
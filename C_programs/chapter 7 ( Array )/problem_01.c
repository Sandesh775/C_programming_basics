#include<stdio.h>

int main(){
    int arr[10] = { 1,2,3,4,5,6,7,8,9,0};
    int *ptr ;
    ptr = &arr[0];// ptr = arr
    printf(" ptr+2 : %d\n",*(ptr+2));
    printf(" From start :\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d\n",*ptr);
        ptr++;
    }
    
     return 0;
}
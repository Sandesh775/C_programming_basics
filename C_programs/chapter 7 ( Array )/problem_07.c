#include<stdio.h>

int main(){
    int array [2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           for (int k = 0; k < 4; k++)
           {
                printf("The address of array is %u\n",&array[i][j][k]);
           }        
        }       
    }  
     return 0;
}
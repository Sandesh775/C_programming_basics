#include<stdio.h>

int main(){
    int marks [2][5] = {{34,56,78,90,34},{34,56,78,57,90}};
    // printing data into tabular structure row and column
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
        
    }
    
     return 0;
}
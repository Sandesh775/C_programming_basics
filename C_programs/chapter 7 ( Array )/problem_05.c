/* #include<stdio.h>
# define m 2
# define n 7
# define o 9
void multiply(int x, int y, int a[x][y])
{
    for (int i = 0; i < x; i++)
    {
        if(i==0)
        {
            for (int j = 0; j < y; j++)
            {
                a[i][j] = m * (j+1);
            }
        }
        else if ( i == 1)
        {
            for (int j = 0; j < y; j++)
            {
                a[i][j] = n * (j+1);
            } 
        }
        else 
        {
            for (int j = 0;  j< y; j++)
            {
                a[i][j] = o * (j+1);
            }
        }
    }
}   
int main()
{
    int arr [3][10];
    multiply(3,10,arr);
    printf(" Printing multiplication table :\n");
    for (int  i = 0; i < 3; i++)
    {
        while (i==0)
        {
            for (int j = 0; j < 10; j++)
        {
            printf("%d * %d = %d\n",m,(j+1),arr[i][j]);
        }
        break;
        }
        printf("\n");
        while (i==1)
        {
            for (int j = 0; j < 10; j++)
        { 
            printf("%d * %d = %d\n",n,(j+1),arr[i][j]);
        }
        break;
        }
        printf("\n");
        while (i==2)
        {
            for (int j = 0; j < 10; j++)
        { 
            printf("%d * %d = %d\n",o,(j+1),arr[i][j]);
        }
        break;
        }
    }
     return 0;
}
     */
    #include <stdio.h>

    int main() {
        int tables[3][10];
        int nums[] = {2, 7, 9};
    
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 10; j++)
                tables[i][j] = nums[i] * (j + 1);
    
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 10; j++)
                printf("%d * %d = %d\n", nums[i], j + 1, tables[i][j]);
            printf("\n");
        }
    
        return 0;
    }
    
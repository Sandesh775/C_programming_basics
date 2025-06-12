#include<stdio.h>
typedef struct vector{  // declaring c as global data type
    int i;
    int j;
}c;
void display (c a[5]){
    for (int i = 0; i < 5; i++)
    {
        
        printf(" The %d number complex number is %d+%di\n",i+1,a[i].i,a[i].j);
    }
    
};
int main(){

    
    c array[5];
    for (int i = 0; i < 5; i++)
    {
        printf(" %d no:\n",i+1);
        printf(" Enter the real part :\n");
        scanf("%d",&array[i].i);
        printf(" Enter the imaginery part :\n");
        scanf("%d",&array[i].j);
    }
    display(array);
    
     return 0;
}
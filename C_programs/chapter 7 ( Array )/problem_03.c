/*#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int temp [5];
    for (int i = 0; i < 5; i++)
    {
     temp [i] = arr[5-i-1];
    }
    for (int i = 0; i < 5; i++)
    {
     printf(" %d\t",temp[i]);
    }
    
    
     return 0;
} */
#include<stdio.h>
void rev(int arr[], int n){ // int n as parameter determining the size of array 
     for (int i = 0; i < n/2; i++)
     {
          int temp;
          temp = arr[n-i-1];
          arr[n-i-1] = arr[i];
          arr[i] = temp;
     }
}
int main(){
     int arr[5] = { 1,2,3,4,5};
     int temp;
     int n = sizeof(arr)/sizeof(arr[0]); // finding the no of elements
     //logic 20 bytes / 4 bytes
     printf(" Brefore reversing !\n");
     for (int  i = 0; i < n; i++)
     {
          printf("%d\t",arr[i]);
     }
     printf("\n");
     printf(" After reversing !\n");
     // calling reverse function 
     rev( arr, n);
     for (int  i = 0; i < n; i++)
     {
          printf("%d\t",arr[i]);
     }
      return 0;
}
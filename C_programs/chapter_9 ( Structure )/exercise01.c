#include<stdio.h>

int main(){
    typedef struct cricketer {
        char name[50];
        int age;
        int noofmatches;
        float average;
    }c1;
    c1 arr[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter details for cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", arr[i].name);

        printf("Age: ");
        scanf("%d", &arr[i].age);

        printf("Number of matches: ");
        scanf("%d", &arr[i].noofmatches);

        printf("Batting average: ");
        scanf("%f", &arr[i].average);
    }
    printf("Name\tAge\tNo of Matches\tAverage batting \n");
    for (int i = 0; i < 2; i++)
    {
       printf("%s\t",arr[i].name);
       printf("%d\t",arr[i].age);
       printf("%d\t\t",arr[i].noofmatches);
       printf("%f\t",arr[i].average);
       printf("\n");
    }
    
    
     return 0;
}
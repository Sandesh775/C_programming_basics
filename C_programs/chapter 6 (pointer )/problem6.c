#include<stdio.h>

int main(){
    int i = 90;
    int *j;
    j = &i;
    int **k;
    k = &j;
    printf(" The value of i is %d\n",i);
    printf(" The aadress of i is %u\n",j);
    printf(" The value of i using dereference is %d\n",**k);
     return 0;
}
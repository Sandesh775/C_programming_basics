#include<stdio.h>

int main(){
    int i = 0;
    i++;// but when it is executed without printf() it simply do increment job
    printf("%d\n",i++);// hence i++ works as print first , and then assign//
    printf("%d\n",i);
     return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "fjkjfwejijoijcckjsoiaoooowowowowowoww wewowowsssowwosandnheh";
    int count = 0;
    for (int  i = 0; i <starlen(str); i++)
    {
        if(str[i] == 'w'){
            count ++;
        }
    }
    printf(" Number of w letter in string is %d\n",count);
    
     return 0;
}
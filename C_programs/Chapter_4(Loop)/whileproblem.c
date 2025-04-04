#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    int i=0;
    int a = 0;

    while (i <=n){
        a = a + i;
       i ++;// Increment after addition
    }
    printf("THe sum is equals to = %d",a);
     return 0;
}
/*Do while 
do {
 a = a + i;
 i ++;
}
 while ( i <= n);


 // for 
 for ( i =0; i <=n ; i++){
    sum += i;
    }






*/
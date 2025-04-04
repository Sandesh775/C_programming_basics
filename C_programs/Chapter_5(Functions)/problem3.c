#include<stdio.h>
#define G 9.81  
float force ( float );
float force ( float a){
   return a * G; 
}
int main(){
    float m;
    printf(" Enter the mass of a body : \n");
    scanf("%f",&m);
    printf(" The force of attraction on the mass is %.2f N\n",force(m));
     return 0;
}
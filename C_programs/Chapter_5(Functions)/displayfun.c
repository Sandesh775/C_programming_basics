#include<stdio.h>
void display1 (){
    printf(" Good morning !");
}
void display2 (){
    printf(" Good night !\n");

}
void display3 (){
    printf(" Thank you !\n");
}
int main(){
    printf(" First one \n");
    display1();
    printf(" Second one \n");
    display2();
    printf(" Third one \n");
    display3();
     return 0;
}
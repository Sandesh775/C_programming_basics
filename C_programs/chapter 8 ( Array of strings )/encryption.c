
#include<stdio.h>

int main(){
    char str[] = "ABC";  // str has its own memory
    char encrypt[4];  // 3 letters + 1 null-terminator
     int value[3]; // for ASCII values
    
    // assigning the ascii value of each character to integer array
    for (int i = 0; i < 3; i++)
    {
        value[i] = str[i];
    }
    // here i made the encryption adding +1 
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n",value[i]+1);
    // }
    for (int i = 0; i < 3; i++)
    {
        encrypt[i] = value[i]+1;
    }
    encrypt[3] = '\0'; // important 
    // now showing the encrypt ascii value into character or string form
    printf(" Entered word is %s\n",str);
    printf(" Encrypt word is %s \n",encrypt);
    // for (int i = 0; i < 3; i++)
    // {
    //     printf(" %c",value[i]+1);
    // }
     return 0;
}
/* alternative
#include <stdio.h>
int main() {
    char str[] = "ABC";
    char encrypt[4]; // Include space for null-terminator
    int value[3];    // You only need 3, not 4

    // Assign ASCII values
    for (int i = 0; i < 3; i++) {
        value[i] = str[i];
    }

    // Print incremented ASCII values
    printf("Encrypted ASCII values:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", value[i] + 1);
    }

    // Encrypt and store in encrypt[]
    for (int i = 0; i < 3; i++) {
        encrypt[i] = value[i] + 1;
    }
    encrypt[3] = '\0'; // Null-terminate the string

    // Show encrypted word
    printf("Encrypted word is: %s\n", encrypt);

    return 0;
}
*/
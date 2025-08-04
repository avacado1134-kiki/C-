// Addition of a number to a pointer
// Substraction of a number to a pointer
// Substraction of one pointer from another
// Comparision of two pointers variables

#include <stdio.h>

int main(){
    int a=34;
    int*i=&a;
    printf("The address of a is %u\n",i);
     i+=2;// i.e woh 2+ 2+ 2+ 2+ karke 8 bytes aage badha
    printf("The value of i is %u\n",i);
    return 0;
}


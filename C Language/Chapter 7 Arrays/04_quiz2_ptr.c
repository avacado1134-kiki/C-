#include <stdio.h>

int main(){
    int a=34;
    int*i=&a;
    printf("The address of a is %u\n",i);
     i--; 
    printf("The value of i is %u\n",i);
    return 0;
}
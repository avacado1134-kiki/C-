#include <stdio.h>

int main(){
    int a=34;
    int*i=&a;
    int b=90;
    int*p=&b;
    printf("The address of a is %u\n",i);
    printf("The address of b is %u\n",p);
     int subs=i-p; 
    printf("The value of subs is %u\n",subs);
    return 0;
}
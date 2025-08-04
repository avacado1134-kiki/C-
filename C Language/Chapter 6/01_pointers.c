// j ek pointer hai jisne i ke address ko store kiya hua h jhn i ek int hai
#include <stdio.h>

int main()
{
    int i = 70;
    int *j = &i;     // j is a pointer pointing to i
    printf("The address of i is %p\n", &i); //%p is for the address to be printed in actual form hexa decimal
    // printf("The address of i is %u\n",&i);// %u is for the address to be printed in integer form
    printf("The address of i is %p\n", j);
    printf("The value at address of j is %d\n", *j);    // 70
    printf("The value at address of j is %d\n", *(&i)); // 70
    printf("The address of j is %p\n", &j); //jo address dtore karta hai uska bhi toh address hoga na

    return 0;
}
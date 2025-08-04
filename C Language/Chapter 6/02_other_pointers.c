// j ek pointer hai jisne i ke address ko store kiya hua h jhn i ek int hai
#include <stdio.h>

int main()
// jo pointer declare karna hai woh usi type ka karna hai woh usi type ka karna hai jis type ka aap variable storekarne wale ho
{
    char k = 'A';
    char *j = &k; // j is a character pointer(j is a pointer pointing to i)  printf("The address of i is %p\n", &i); //%p is for the address to be printed in actual form hexa decimal
    printf("The address of k is %p\n", j);
    printf("The address of k is %p\n", &k);
    printf("The value at address of j is %d\n", *j);    // ascii  value i.e 65
    printf("The value at address of j is %d\n", *(&k)); // ascii  value i.e 65
    printf("The address of j is %p\n", &j);             // jo address store karta hai uska bhi toh address hoga na

    float x = 5.678;
    float *y = &x;
    printf("The address of x is %p\n", y);
    printf("The address of x is %p\n", &x);
    printf("The value at address of y is %.3f\n", *y);
    printf("The value at address of y is %.3f\n", *(&x));

    printf("The address of y is %p\n", &y);

    return 0;
}
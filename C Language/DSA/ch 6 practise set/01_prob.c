#include <stdio.h>

int main()
{
    int x = 5;
    int *y = &x; // jo ki ek pointer hai
    printf("The address of x is %u\n", &x);
    // OR
    printf("The address of x is %u\n", y);
    printf("The value of x is %d\n", *y);
    // OR
    printf("The value of x is %d\n", *(&x));

    return 0;
}
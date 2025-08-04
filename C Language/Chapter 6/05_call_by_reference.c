#include <stdio.h>

// sum should change the value of x for this give the address

int sum(int *a, int *b)
{
    *a = 6;
    return (*a + *b);
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));  //address dedoi.e reference dedo
    printf("The value of x is %d\n", x);

    return 0;
}
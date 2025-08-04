//write a program to calculate the sum of the nos. occurring in the multiplication table of 8

#include <stdio.h>

int main()
{
    int n = 8;
    int i;
    int sum = 0;
    for (i = 1; i < 11; i++)
    {
        printf("%d x %d=%d\n", n, i, n * i);
    }
    for (i = 1; i <= 10; i++)
    {
        sum += n * i;
    }
    printf("the sum of multiplication is: %d\n", sum);
    return 0;
}

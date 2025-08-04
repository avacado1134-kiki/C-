//write a program to print multipilcation table of given no. n in reversed order

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 10; i; i--)
    {
        printf("%d x %d=%d\n", n, i, n * i);
    }

    return 0;
}
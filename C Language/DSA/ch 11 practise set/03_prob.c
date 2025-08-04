// create an array of multiplication table of 7 till (7x10).use realloc to make it store 15 numbers(7x15)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("The array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    n = 15;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("The array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
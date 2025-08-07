// write a program to print multiplication table pf a given no. n

// #include <stdio.h>

// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     for (i = 1; i < 11; i++)
//     {
//         printf("%d x %d=%d\n", n, i, n * i);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, mul;
    printf("enter number\n");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d x %d=%d\n", n, i, mul);
    }
    return 0;
}
// Write a program to print sum of n natural nos and take data from user initialise i = 0 and print the data
// #include <stdio.h>

// int main()
// {
//     int n;
//     int sum = 0;
//     int i = 1;
//     printf("enter no. \n");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         sum += i;
//         i++;
//     }
//     printf("The sum of n natural number is %d \n", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("enter no. \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of n natural number is %d \n", sum);

    return 0;
}
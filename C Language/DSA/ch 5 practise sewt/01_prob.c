// #include <stdio.h>
// int average(int, int, int);
// int average(int n1, int n2, int n3)
// {
//     printf("The average of three nos. is %d\n", (n1 + n2 + n3) / 3);

//     // return ((n1 + n2 + n3) / 3);
//     return (n1,n2,n3);
// }

// int main()
// {
//     int n1 = 2;
//     int n2 = 3;
//     int n3 = 4;
//     average(n1, n2, n3);
//     // int f=average(n1,n2,n3);

//     return 0;
// }
                                                        // OR

#include <stdio.h>
float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a = 3, b = 9, c = 8;
    printf("The average is %f", average(a, b, c));

    return 0;
}
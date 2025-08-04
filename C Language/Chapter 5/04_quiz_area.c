#include <stdio.h>
#include <math.h>

int main()
{
    // int a;
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("The area of the square is %f\n", pow(a, 2)); // i.e a to the power 2
    // pow function double return karta hai toh uske liye hame %f karna hoga
    return 0;
}
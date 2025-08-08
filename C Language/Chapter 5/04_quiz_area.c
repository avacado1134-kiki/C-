#include <stdio.h>
#include <math.h>

int main()
{
    // int a;
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("The area of the square is %f\n", pow(a, 2)); // i.e a raised to the power 2
    // pow function double(i.e a floating point number) return karta hai toh uske liye hame %f karna hoga
    return 0;
}
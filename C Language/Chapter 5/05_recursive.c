#include <stdio.h>
int factorial(int);
// factorial(n)=1x2x3x4....xn-1xn
int factorial(int n)
{
    if (n == 1 || n == 0) // Base condition hai yeh jo yeh ensure karti hai ek rucurrsive program mein ki recurssive program end ho rha h
    {
        return 1; //so ek baar return ho gya phir uske niche ka kuch bhi call ya return nhi hota hai
    }
    // factorial(n)=factorial(n-1)x n
    return n * factorial(n - 1);
}

int main()
{
    int a = 9;
    printf("the factorial of %d is %d\n", a, factorial(a)); // func call

    return 0;
}
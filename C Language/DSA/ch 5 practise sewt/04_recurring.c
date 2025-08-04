#include <stdio.h>
// (The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones.)
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fib(n)=fib(n-1)+fib(n-2); general formula
int fib(int);
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 4;
    printf("The value of fibonacci series at %d is %d\n", n, fib(n));

    return 0;
}
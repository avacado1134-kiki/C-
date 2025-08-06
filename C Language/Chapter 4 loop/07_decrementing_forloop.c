#include <stdio.h>

int main()
{

    for (int i = 5; i; i--) // i ki value jab tak non zero hai condition is true
    // int i = 5; → Initialization: start with i = 5

    // i; → Condition: while i is non-zero (true), continue

    // i-- → Update: decrement i after every loop
    {
        printf("me %d\n", i); // this (for loop) will continue running until i becomes 0
    }
    return 0;
}
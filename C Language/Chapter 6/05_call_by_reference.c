                //CALL BY REFERENCE
#include <stdio.h>

// sum should change the value of x,for this give the address

int sum(int *a, int *b)
{
    *a = 6;//changes the value at the adddress pointed by a
    return (*a + *b);
    // The return value is the sum of *a (now 6) and *b (still 6).
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));  //address de do i.e reference dedo
    printf("The value of x is %d\n", x);

    return 0;
}
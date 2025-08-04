#include <stdio.h>
int sum(int, int);
int sum(int a, int b)
{ // hyeh function chah kar bhi x and y ki value change nhi kar sakta as a aur y ki copy ja rhi hai func mein
    return a + b;
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(1, 6)); // 1 aur 6 a and b mein copy ho jayenge
    printf("The sum of x and y is %d\n", sum(x, y)); // 1 aur 6 a and b mein copy ho jayenge

    return 0;
}
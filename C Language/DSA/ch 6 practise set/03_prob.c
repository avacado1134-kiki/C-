// wap to change the value of a variable to ten times of its current value

#include <stdio.h>
void change(int *);
void change(int *a)
{
    *a = *a * 10;
}

int main()
{
    int x = 45;
    change(&x);
    printf("The 10 times changed value of x is %d", x);

    return 0;
}
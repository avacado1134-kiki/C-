#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        // this loop runs from 0-2
        // if i=0  prints 1 star
        // if i=1  prints 3 star
        // if i=2  prints 5 star
        //  no of stars = (2*i+1)
        for (int j = 0; j < 2 * i + 1; j++)
        //this for loop prints (2*i+1) stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
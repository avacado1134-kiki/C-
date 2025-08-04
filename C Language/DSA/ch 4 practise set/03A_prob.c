#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("enter no.\n");
    scanf("%d", &n);
    do
    {
        /* code */
        printf("the value of i is : %d\n", i);
        i++;
    } while (i <= n);
    return 0;
}


//the do while loop executed for at least once
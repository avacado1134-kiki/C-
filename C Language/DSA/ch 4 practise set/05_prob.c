#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
       // printf("the invisual sum is:%d\n", sum); 
    }

    printf("the total sum is:%d\n", sum);

    return 0;
}

//write a program to sum first ten natural nos. using while loop
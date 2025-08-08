#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)// initialise;test;increment/decrement
    {                                       
        printf("enter value of i %d\n", i); // i.e condition check hogi true hai toh block execute hogi then i update hogi
    printf("%d",i+i-1);
    }
    return 0;
}

//using for loop write n natural nos.
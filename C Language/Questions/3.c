// to check if a number is prime in C using a loop
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, isPrime = 1;
    printf("Enter the number \n");
    scanf("%d", &n);
    if (n <= 1)
    {
        isPrime = 0; // 0 and 1 are not prime
    }
    else
    {
        for (i = 2; i <= sqrt(n); i++) // used sqrt and not till n cuz n tak bht lamba checking hota isiliye sqrt kiye kyunki
        //  if a no. is prime it will be written as n=pxq so,p or q anyone mustbe less than or equal to sqrt(n)
        {
            if (n % i == 0)
            {
                isPrime = 0; // found a divisor
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("The number %d is Prime \n", n);
    }
    else
    {
        printf("The number %d is Not Prime \n", n);
    }

    return 0;
}
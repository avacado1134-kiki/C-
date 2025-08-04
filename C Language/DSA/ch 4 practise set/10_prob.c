// to check whether a given no. is not_prime or not using loops

#include <stdio.h>

int main()
{
    int n = 1;

    int not_prime = 0; //0 tends to false i.e not prime is false
    if (n == 0 || n == 1)
    {
        not_prime = 1; //1 tends to true
       // printf("the no. is not prime");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                not_prime = 1; // i.e not_prime = true
                break;
            }
        }
        if (not_prime)
        {
            printf("The no. %d is not prime \n", n);
        }
        else
        {
            printf("The no. %d is prime", n);
        }

        return 0;
    }
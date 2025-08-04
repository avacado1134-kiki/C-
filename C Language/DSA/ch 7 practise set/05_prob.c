// create an aaray of size 3x10 containing multiplication tables of the numbers 2 7 and 9 respectivekly

#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1); // if i=0 then hame 2 ki multiplication table likhni hai
                                          //  Eg- 2   *   1
                                          //      2   *   2
                                          //      2   *   3
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d \n", arr[i][j]);
        }
        printf("\n");
    }
        return 0;
    }
#include <stdio.h>

int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++) // this is for [3] i.e 0th row,1st row etc...
    {
        for (int j = 0; j < 2; j++) // this is for [2] i.e 0th column,1st column etc...
        {
            printf("Enter the value of arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // for (int i = 0; i < 3; i++) // this is for [3] i.e 0th row,1st row etc...
    // {
    //     for (int j = 0; j < 2; j++) // this is for [2] i.e 0th column,1st column etc...
    //     {
    //         printf(" The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    //     }
    // }

    for (int i = 0; i < 3; i++) // this is for [3] i.e 0th row,1st row etc...
    {
        for (int j = 0; j < 2; j++) // this is for [2] i.e 0th column,1st column etc...
        {
            // printf("{%d,%d}", arr[i][j], arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
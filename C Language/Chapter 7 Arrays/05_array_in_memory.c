//jo memory location hoti hai woh continuous hoti h
                    //CONTICUOUS BLOCKS IN MEMORY


#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter marks of 5 students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %u\n", i, &marks[i]);
    }
                // OUTPUT
// The value of marks at index 0 is 3609196880
// The value of marks at index 1 is 3609196884
// The value of marks at index 2 is 3609196888
// The value of marks at index 3 is 3609196892
// The value of marks at index 4 is 3609196896
//SEE ALL ARE CONTIGUOUS 
    return 0;
}
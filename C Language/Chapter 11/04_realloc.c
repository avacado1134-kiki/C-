                        //syntax
// ptr=realloc(ptr,newsize);
// ptr=realloc(ptr,3*sizeof(int));

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int *ptr;
// printf("The value of n is \n");
//     scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 9;
    printf("%d and %d", ptr[0],ptr[1]);
    ptr=realloc(ptr,10*sizeof(int));//ab main chahta hun ki 5 ki jagah 10 integer store kare toh yeh kro
    
    return 0;
}
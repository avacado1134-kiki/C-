// changing the size of an aaray is not allowed in c
// functions for DMA (dynamic memory allocations ) in c
//  malloc()-->it takes no. of bytes to be allocated as an input and returns a pointer to type void
//  calloc()-->almost as malloc
//  free()-->used to deallocate the memory(free(ptr))
//  realloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
printf("The value of n is \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));//ab hame memory location point kar di gyi h
    //  ptr = (int *)typecasting so that integer pointer de null pointer nhi malloc(n * sizeof(int)); // sizeof batata hai ki int ek architecture mein kitna size(bytes) le rha h
    // agar n ki value 5 hai aur har element 4 bytes le rha hai toh kitna pura space chahiye
    // int arr[n];//not allowed in c
    ptr[0] = 3;
    ptr[1] = 9;
    printf("%d and %d", ptr[0],ptr[1]);
    return 0;
}
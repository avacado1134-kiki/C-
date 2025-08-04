// wap with a structure representing a complex number

#include <stdio.h>
typedef struct c
{
    int real;
    int imaginary;
} complex;

int main()
{
    complex c = {1, 2};
    printf("The value of comple no. is %d + %d i\n", c.real, c.imaginary);

    return 0;
}
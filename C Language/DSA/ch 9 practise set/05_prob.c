// create an array of 5 natural numbers and display them with the help of a display func.

#include <stdio.h>
typedef struct c
{
    int real;
    int imaginary;
} complex;
void display(complex c)
{
    printf("The value of comple no. is %d + %d i\n", c.real, c.imaginary);
}
int main()
{
    complex c_arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &c_arr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d", &c_arr[i].imaginary);
        display(c_arr[i]);
    }
    return 0;
}
// wap using a func which calculates the sum and average of two nos.
// use pointers and print the value of sum and average in main()

#include <stdio.h>

int *sum(int a, int b)//int * is a pointer to an integer
{
    int s = a + b;
    int *ptr = &s;//addresss stores in variable so that return karte value destroy na ho
    printf("The sum is %d \n", s);
    return ptr;
}
float *average(int a, int b)
{
    float avg = (a + b) / 2.0;
    float *ptr = &avg;
    printf("The average is %f \n", avg);
    return ptr;
}
int main()
{
    int x = 4;
    int y = 6;
    int *ptr1;
    float *ptr2;
    ptr1 = sum(x, y);
    ptr2 = average(x, y);
    sum(x, y);
    average(x, y);
    printf("the address of sum is %u and of average is %u", ptr1, ptr2);

    return 0;
}
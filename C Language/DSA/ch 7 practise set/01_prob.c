#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int*ptr=arr; //point kara diya pointer ko pehle element pe

    printf("The value at address  %u is %d",ptr+3,*(ptr+3));//yeh dekhne ke liye ptr+3 pointer khn point kar rha
    return 0;
}
// reverse the digits of an integer without using strings for both positive and negetive
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10; 
    }
    printf("The reversed no. is %d \n", reversed);

    return 0;
}
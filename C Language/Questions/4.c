// wap a number to be reversed and also check whether it is Palindrome or not
#include <stdio.h>
#include <stdlib.h>
int isPalindrome(int num)
{
    int og_num = num;
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10; // eventually num becomes zero isiliye original number og_num mein store kiye hai taaki aage comparfe karne mein usi ka prayog karen
    }
    printf("The reversed no. is %d \n", reversed);

    if (og_num == reversed)
    {
        return 1;
    }
    else
    { // waise zarurat nhi thi aise bhi shi chalta
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("The number is palindrome \n");
    }
    else
    {
        printf("Not a Palindrome number \n");
    }
    return 0;
}
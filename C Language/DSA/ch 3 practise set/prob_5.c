// write a program to say that whether a character entered is lowercase or not
// https://ee.hawaii.edu/~tep/EE160/Book/chap4/subsection2.1.1.1.html#:~:text=The%20ASCII%20table%20has%20128,)%2C%20for%20an%20ASCII%20character.
#include <stdio.h>

int main()
{
    char ch;
    printf("enter character:\n");
    scanf("%c", &ch);
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97-122
    if (ch >= 97 && ch <= 122)
    {
        printf("This character is lowercase\n");
    }
    else
    {
        printf("This character is not lowercase\n");
        // as there are many other special symbols which are not lowercase nor uppercase
    }
    return 0;
}
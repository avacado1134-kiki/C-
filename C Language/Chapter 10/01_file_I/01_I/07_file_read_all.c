// fgets returns EOF when all the characters from a file have been read.

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("kiki.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);  // when all the contents of a file has been read tehn break
        printf("%c", ch); // ek ek karke character leta jaunga aur print karta jaunga
        if (ch == EOF)    // jab bhi aapki file khtm hoti hai tab hota h end of file
        {
            break;
        }
    }
    return 0;
}
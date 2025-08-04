// wap to read a text file character by character and write its content twice in seperate file

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("Love_me.txt", "r");
    ptr2 = fopen("kiki01.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);//character ko read karo kiki.txt se

        if (ch == EOF) // jab bhi aapki file khtm hoti hai tab hota h end of file
        {
            break;
        }
        else
        {
            fprintf(ptr2,"%c",ch);//fprintf is used to write formatted output to a specified file
            fprintf(ptr2,"%c",ch);
            printf("%c", ch);//printf is used for printing formatted output to the standard output
        }
    }
    return 0;
}
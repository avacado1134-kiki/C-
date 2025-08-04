// write a program to count the occurrence of a given character in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'my';
    int count = 0;
    char s[] = "Hi my name is Kiki,my coding session has just started ";
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
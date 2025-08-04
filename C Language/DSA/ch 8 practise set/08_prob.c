// wap to check whether a given character is present in a string or not

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'm';
    int contains = 0;
    char s[] = "Hi my name is Kiki,my coding session has just started ";
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            contains = 1; // for true
            break;
        }
    }
    if (contains)
    { // i.e if contains is 1 i.e true
        printf("Yes here the character\n");
    }
    else
    {

        printf(" Here does not contains");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    char s[6];
    // scanf("%s", s);
    // printf("%s",s);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &s[i]); // yeh na enter ko bhi ek chr maan le rha h
        fflush(stdin);      // yeh jo new line character usko aap flush kar de na le usko
    }
    s[5] = '\0';
    printf("%s", s);

    return 0;
}
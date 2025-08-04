// wap u'r own strlen and strcpy functions

#include <stdio.h>
int mystrlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1; // for not count null character
    return count;
}
void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0'; // for terminating by null character
}
int main()
{
    char source[] = "kiki";
    char target[30];
    mystrcpy(target, source); // target now have source
    printf("%s %s", source, target);

    return 0;
}
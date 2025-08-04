#include <stdio.h>
int my_strlen( char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;//for not count null character
    return count;
}
int main()
{
    char str[] = "Kiki how are u?";//counts spaces also = 14
    printf("%d",my_strlen(str));

    return 0;
}
#include <stdio.h>
int main()
{
    int num = 4;
    FILE *ptr;
    ptr = fopen("Love_me.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d", num * (i + 1));
        fprintf(ptr, "%c", '\n');
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // the entered string is stored in st
    printf("%s", st);
    printf("Hello moto");//this will print in the same line without any space
    return 0;
}

//use fgets instead of gets
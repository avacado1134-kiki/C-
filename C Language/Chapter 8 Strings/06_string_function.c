#include <stdio.h>
#include <string.h> //this header file is used whenever string operation are executed

int main()
{
    char st[] = "Kiki";
    printf("%d\n", strlen(st)); // tells the string length excluding the null character

    char target[30];
    strcpy(target, st); // target now contains 'kiki here'
    printf("%s %s\n", st, target);

    char sc[] = "Hello";
    strcat(st, sc);            // st now contains "KikiHello" without spaces in between i.e concatenation
    printf("%s %s\n", sc, st); // here sc still contains only "Hello"

    // strcmp function used to copare two strings
    // returns 0 if the strings are equal
    //  returns a negetive value if the first string ascii value is less than the second string ascii value
    //  returns a positive value if the first string ascii value is more than the second string ascii value

    int a=strcmp("far", "joke");//negetive value 
    int b=strcmp("joke", "joke");//0
    int c=strcmp( "joke","far");//positive value
    printf("%d %d %d",a,b,c);

    return 0;
}
// Kabhi bhi character read aur write karna h kisi file mein to use FGETC() and FPUTC()

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("kiki.txt", "r"); // agar read mode mein khol rhe toh sirf fgetc ko use karenge
    char c = fgetc(ptr);               // used to read a character from file
    printf("%c", c);
//prints the first character from the file can be anything no.,alpha etc...
    return 0;
}
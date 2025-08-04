#include <stdio.h>

int main()
{
    // char st[] = {'a', 'b', 'c'};       // its a string aaray
    // char st[] = {'a', 'b', 'c', '\0'}; // now its a string i.e string array with a null character
    char st[] = "abc"; //agar ham "" ka istemaal karte hai toh automatically null character lag jata hai// Same as written char st[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("%c",st[i]);
        printf("Character is %c \n", st[i]);
    }
   // printf("First character is %c \n", st[0]);
    return 0;
}
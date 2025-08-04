// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("kiki.txt", "w"); 
//     fputc('c',ptr);//note that append nhi hua h pura clear karke c likh dega
//     return 0;
// }


#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("kiki.txt", "a"); 
    fputc('c',ptr);//note that append hua h pura clear nhi karega bas end of the file pointer se likh dega c
    return 0;
}
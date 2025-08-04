// write a function slice() to slice a string.it should change the OG string such that it is now the sliced string.
//  Take 'm' and'n' as the start and the ending position for slice

#include <stdio.h>
char *slice(char s[], int m, int n) // char*kyunki main ek character pointer chala raha hun
{
    int i = 0, count;
    char *ptr1 = &s[m];
    char *ptr2 = &s[n];
    s = ptr1; // mtlb yahan se start hona chahiye pointer
    s[n] = '\0';
    return s;
}
int main()
{
    char s[] = "Kiki hey";
    printf("%s", slice(s, 1, 5)); // yeh 1 index se start hua 5 tak gya "iki h"
    // but if started with 0 index then 4 index tak hi jayega "Kiki "
    return 0;
}
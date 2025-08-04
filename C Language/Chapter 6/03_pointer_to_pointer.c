#include <stdio.h>

int main()
{
    int i = 6;
    int *j = &i;
    int **k = &j;
    printf("The value of i is %d\n", i);     // 6
    printf("The value of i is %d\n", *j);    // 6
    printf("The value of i is %d\n", *(&i)); // 6
    printf("The value of i is %d\n", **(&j));
    //* se & kat jata h    input  ***&&&a    output a
    return 0;
}
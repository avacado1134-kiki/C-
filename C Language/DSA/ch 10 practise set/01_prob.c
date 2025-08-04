#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1, num2, num3;
    ptr = fopen("Love_me.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The first three integers are %d %d %d\n", num1, num2, num3);
    fclose(ptr);

    return 0;
}
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    printf("enter 1st number:\n");
    scanf("%d", &n1);
    printf("enter 2nd number:\n");
    scanf("%d", &n2);
    printf("enter 3th number:\n");
    scanf("%d", &n3);
    printf("enter 4th number:\n");
    scanf("%d", &n4);
    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("The greatest of all is %d:", n1);
    }
    else if (n2 > n3 && 2 > n4 && n2 > n1)
    {
        printf("The greatest of all is%d:", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("The greatest of all is%d:", n3);
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3)
    {
        printf("The greatest of all is%d:", n4);
    }
    return 0;
}
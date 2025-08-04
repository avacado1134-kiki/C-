#include <stdio.h>

int main()
{
    // int a = 945645;
    int a;

    printf("Enter no.\n");
    scanf("%d", &a);
    printf("the value a%97 is %d",a % 97);

        // printf("the value of a%97 is %d", a % 97);

        return 0;
}

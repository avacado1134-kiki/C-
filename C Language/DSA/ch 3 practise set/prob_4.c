//whether the year entered is leap year or not

#include <stdio.h>

int main()
{
    int year;
    printf("enter year:\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    //this is the actual condition of leap year
    {
        printf("year is a leap year");
    }
    else
    {
        printf("the year is not a leap year");
    }
    return 0;
}
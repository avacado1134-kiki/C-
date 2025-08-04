// to say the student is passed if he got (overall > 40%) or marks in indivisual subjects > 33%
//different method

#include <stdio.h>

int main()
{
    int m1;
    int m2;
    int m3;

    printf("enter marks of 1st subject: \n");
    scanf("%d", &m1);
    printf("enter marks of 2nd subject: \n");
    scanf("%d", &m2);
    printf("enter marks of 3rd subject: \n");
    scanf("%d", &m3);
    if (m1 < 33 || m2 < 33 || m3 < 33)
    {
        printf("you are failed due to less marks in indivisual subjects\n");
    }
    else if ((m1 + m2 + m3) / 3 < 40) //to determine the average percentage of the student
    {
        printf("you are failed due to less percentage\n");
    }
    else
    {
        printf("you are passed,congrats!");
    }
    return 0;
}
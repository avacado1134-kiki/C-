// wap a structure capable of storing date.Wap a func to compare those dates

#include <stdio.h>
struct date
{
    int mm;
    int dd;
    int yyyy;
};
int compare(struct date d1, struct date d2)
{
    // if d1 is in the future return 1
    if ((d1.yyyy == d2.yyyy) && (d1.dd == d2.dd) && (d1.mm == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
     else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
     else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
     else if (d1.dd < d2.dd)
    {
        return -1;
    }

}

int main()
{
    struct date d1 = {12, 4, 2004};
    struct date d2 = {1, 6, 2157};
    printf("%d", compare(d1, d2));
    return 0;
}
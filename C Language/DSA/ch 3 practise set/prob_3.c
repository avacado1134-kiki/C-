// for income tax calculation

#include <stdio.h>

int main()
{
    float income, tax = 0;
    printf("enter income:\n");
    scanf("%f", &income);
    if (income < 250000)
    {
        tax = 0;
        printf("no tax implemented\n");
    }
    else if (income > 250000 && income < 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("the payble tax is this %.2f\n", tax);  //that means decimal ke baad sirf 2 digit hi aayega
    }
    else if (income > 500000 && income < 2000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        printf("the payble tax is this %.2f\n", tax);
    }

    return 0;
} // or just print a statement at last as
//(this is net payble tax"%d",tax)
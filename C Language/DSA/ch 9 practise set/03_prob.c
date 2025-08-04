// arrow

#include <stdio.h>
typedef struct emp
{
    int salary;
    float score;

} e;

int main()
{
    e e1;
    e *ptr1 = &e1; // like int*

    printf("The salary is %d\n", ptr1->salary = 9087);
    // printf("The salary is %d\n",(*ptr1).salary=9087);//same as printed above
    return 0;
}
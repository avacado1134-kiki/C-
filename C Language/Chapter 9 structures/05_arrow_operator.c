//instead of writing (*ptr) we can use arrow operator

#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    strcpy(e1.name,"kiki");
    e1.code=001;
    e1.salary=7894.90;
    struct employee *ptr;//iska type kya hai pointer to structure employee 
    //ptr employee structure ka pointer hai 
    //ptr address store kar rha h employee structure ka
    ptr = &e1;
    // now we can use structure element using :
    printf("%d %.2f %s\n", (*ptr).code,(*ptr).salary,(*ptr).name);
    printf("%d %.2f %s\n",ptr->code,ptr->salary,ptr->name);

        return 0;
}
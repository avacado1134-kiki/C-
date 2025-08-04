// a structure can be passed to a function just like any other data type
//  void show(struct employee e);//function prototype

#include <stdio.h>
#include <string.h>
struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];
};
void show(struct employee e)
{
    printf("Code is %d\n Salary is %f\n Name is %s\n ", e.code, e.salary, e.name);
    
}
//do not redefine the function by e1 , e2

int main()

    {
        struct employee e1, e2;
        strcpy(e1.name, "Kiki");
        e1.salary = 54.55;
        e1.code = 1;
        show(e1);
        strcpy(e2.name, "Harry");
        e2.salary = 60.52;
        e2.code = 2;
        show(e2);

        return 0;
    }
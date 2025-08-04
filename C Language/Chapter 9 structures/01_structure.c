// structure can hold dissimilar type of data
// structure ko declare ham main function ke bahar karte hai

#include <stdio.h>
#include <string.h>
struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];

}; // here ; is important

int main()
{
    struct employee e1, e2;
    // e1.name="Kiki"; //we cant direct use equal to here.
    // Ya toh pehle hi declare karne ke waqt hi = karte likh dete but baad mein karoge toh string.h ko include karke strcpy() use karna hoga
    strcpy(e1.name, "Kiki");
    e1.salary = 54.55;
    e1.code = 001;
    strcpy(e2.name, "Harry");
    e2.salary = 60.52;
    e2.code = 002;
    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", e2.code, e2.salary, e2.name);

    return 0;
}